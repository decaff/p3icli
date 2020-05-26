#!/bin/bash

# Create a presentation that contains 400 slides
#
# This is a semi- self-checking test.  If exit code is 0, user of
# this script must spot check that 400 slides were populated (check
# a few slides at beginning, middle, and end of presentation).

logfile="c:/temp/bigtest_log.txt"
testdata="test_data_files/bigtest_log.txt"
script="test_data_files/bigtest.txt"

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

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
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
echo Test passed.  Spot check that 400 slides were populated in displayed
echo presentation.  Check a few slides at beginning, middle, and end.
exit 0
