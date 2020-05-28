#!/bin/bash

# this is a self-checking test

logfile_locn=c:/temp/v13pics_data_log_file.txt
script="./test_data_files/v13pics_script.txt"
testdata=test_data_files/v13pics_data.txt

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

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn $script

tools/delete_init_file.sh     # clean up

diff -bu $logfile_locn $testdata
if [ $? -eq 0 ] ; then
    echo "test passed"
    echo "now verify slide contents against this script:"
    echo "cat -n test_data_files/v13pics_script.txt"
    exit 0
else
    echo 'test failed!!!!!'
    exit 1
fi
