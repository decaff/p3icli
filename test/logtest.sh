#!/bin/bash
# ensure that a log gets created (expect three errors)
# this is a self-checking test

logfile_locn=c:/temp/log_output.txt
testdata="test_data_files/logtest_data.txt"
script="test_data_files/remove.txt"

rm -f $logfile_locn

if [ -f $logfile_locn ] ; then
    echo cannot remove $logfile_locn, failed "(exiting)"
    exit 1
fi

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test\tmplts" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn $script
rc=$?
# expected error code is 3
if [ $rc -ne 3 ] ; then
    echo "incorrect exit code detected, test failed (exiting)"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile_locn
if [ $? -eq 0 ] ; then
    echo "test passed"
    echo "make sure presentation has no comments on slide"
else
    echo 'test failed!!!!!'
    exit 1
fi
exit 0
