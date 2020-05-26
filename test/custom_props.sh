#!/bin/bash

# test that p3icli custom properties
# 
# requires p3icli V2.5 or later

logfile_locn1=c:/temp/custom_props_tests_log_file.txt
testdata="test_data_files/custom_props_data.txt"
script="test_data_files/custom_props_script.txt"

rm -f $logfile_locn1

if [ -f $logfile_locn1 ] ; then
    echo cannot remove $logfile_locn1, failed "(exiting)"
    exit 1
fi

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# begin tests

p3icli -X <<DONE
    halt
DONE

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -Ex -l $logfile_locn1 $script

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile_locn1
if [ $? -eq 0 ] ; then
    echo "test passed"
    rm -f $logfile_locn1
    echo "look @ custom props and see if they agree with this script..."
    cat test_data_files/custom_props_script.txt
    exit 0
else
    echo 'test failed!!!!!'
    exit 1
fi
