#!/bin/bash
#
# Recreate the first example script displayed in p3icli's documentation.
# This is necessarily a visual (eyeball) test.
#
logfile="c:/temp/doc_example1_log.txt"
logfile_edited="c:/temp/doc_example_log_edited.txt"
testdata="test_data_files/doc_example1_log.txt"
script="test_data_files/doc_example1.txt"

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
p3icli -X <<ALLDONE
    halt
ALLDONE

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

# -D2 to semi-validate the path used to open a single template in $script
p3icli -D2 -l $logfile $script

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

# strip out nonportable, path-specific data from log file...
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    $logfile > $logfile_edited

diff -bu $testdata $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    exit 1
fi
echo test passed
echo "need to validate this script"
sleep 2
cat -n $script
exit 0
