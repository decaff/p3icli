#!/bin/bash

# only relevant when Office 2010 or earlier is installed....

logfile1=c:/temp/slide_size_log_file1.txt
logfile2=c:/temp/slide_size_log_file2.txt
script1="./test_data_files/slide_size_script1_pre_2013.txt"
script2="./test_data_files/slide_size_script2_pre_2013.txt"

rm -f $logfile1 $logfile2

if [ -f $logfile1 ] ; then
    echo cannot remove $logfile1, failed "(exiting)"
    exit 1
fi
if [ -f $logfile2 ] ; then
    echo cannot remove $logfile2, failed "(exiting)"
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

p3icli -D -l $logfile1 $script1

diff -bu test_data_files/slide_size_data1_pre_2013.txt $logfile1
if [ $? -eq 0 ] ; then
    echo "slide size test #1 passed"
else
    echo 'slide size test #1 failed!!!!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi

p3icli -D -l $logfile2 $script2

diff -bu test_data_files/slide_size_data2_pre_2013.txt $logfile2
if [ $? -eq 0 ] ; then
    echo "slide size test #2 passed"
    tools/delete_init_file.sh     # clean up
    exit 1
else
    echo 'slide size test #2 failed!!!!!'
fi
tools/delete_init_file.sh     # clean up
exit 0
