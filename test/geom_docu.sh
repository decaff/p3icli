#!/bin/bash

# make sure that the script example in the docu works for
# geometry features.  this is a self-checking test

logfile_locn=c:/temp/geom_data_log_file.txt
testdata="test_data_files/geom_docu_script_data.txt"
script="./test_data_files/geom_docu_script.txt"

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

# kill all instances of ppt
p3icli -X <<ALLDONE
    halt
ALLDONE

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn $script
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile_locn
    exit 1
fi

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile_locn
if [ $? -eq 0 ] ; then
    echo "test passed"
    exit 0
else
    echo 'test failed!!!!!'
    exit 1
fi
