#!/bin/bash

# This is a self-checking test, w/ visual validation upon successful
# completion (exit code 0).  HOWEVER, you will probably need to adjust
# $script to cleanly test a UNC path (on another host, _not_ the test
# host).  Edit/View $script for details.

logfile=c:/temp/file_errs_log.txt
logfile_edited=c:/temp/file_errs_log_edited.txt
script="./test_data_files/file_errs_script.txt"
testdata="test_data_files/file_errs_data.txt"

rm -f $logfile $logfile_edited

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_edited ] ; then
    echo cannot remove $logfile_edited, failed "(exiting)"
    exit 1
fi

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# kill all instances of ppt
p3icli <<ALLDONE
    kill ppt discard
    quit
ALLDONE

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile $script

tools/delete_init_file.sh     # clean up

# 1) Strip out nonportable, path-specific data from log file.
# 2) When opening a garbage template file, Office 2010 uses a different
#    error message than later versions of PPT.  Remove the differing
#    verbiage from the log file.
sed -e  \
's/\(warning: stat("\)'"${p3icli_root_dos_subst}"'\\test\\\(.*$\)/\1\2/' \
-e 's/\(^PPT: line 49: error: \).*$/\1/'                                 \
    $logfile > $logfile_edited

diff -bu $testdata $logfile_edited
if [ $? -eq 0 ] ; then
    echo "test passed"
    echo "verify presentation slides...here's the script"
    cat -n test_data_files/file_errs_script.txt
else
    echo 'test failed!!!!!'
    exit 1
fi

exit 0
