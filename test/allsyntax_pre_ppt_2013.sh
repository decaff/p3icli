#!/bin/bash

# test almost all syntax accepted by p3icli...can't test:
#
# 1) all variations of {halt | exit | quit}, and
# 2) features that predate this version of PPT (i.e., "save as pdf").
#
# only relevant for PPT pre-2013.
#
# This is a self-checking test.

logfile="c:/temp/allsyntax_log.txt"
testdata="test_data_files/allsyntax_pre_2013_log.txt"
script="test_data_files/allsyntax_pre_2013_script.txt"

rm -f $logfile

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

p3icli -X << CLEAN_UP
CLEAN_UP

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}"      >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile $script

if [ $? -ne 0 ] ; then 
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile
if [ $? -ne 0 ] ; then
    echo 'test failed!!'
    exit 1
fi
echo test passed
exit 0
