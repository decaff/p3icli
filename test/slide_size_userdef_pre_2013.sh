#!/bin/bash

# only relevant for pre-office 2013

logfile=c:/temp/slide_size_log_file1.txt
script="./test_data_files/slide_size_script_userdef.txt"

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

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli  -l $logfile $script

tools/delete_init_file.sh     # clean up

diff -bu test_data_files/slide_size_data_userdef_pre_2013.txt $logfile
if [ $? -eq 0 ] ; then
    echo "slide size test passed"
else
    echo 'slide size test failed!!!!!'
    exit 1
fi
exit 0
