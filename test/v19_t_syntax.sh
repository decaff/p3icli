#!/bin/bash

logfile="c:/temp/v19_log.txt"
testdata="test_data_files/v19_log.txt"

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
# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh
# --------------------------------------------------------------------------

echo testing -T command line switch.  Sleeping for 17 seconds....

# test some v1.9 p3icli features (the -T command line switch)
p3icli -T 17000    <<ALLDONE &> $logfile

# cause a syntax error...
bite me

open template ${p3icli_root_dos_echo}\doc\sampleTemplate.potx

# populate slide #1 => 3 pics
title "going to die now..."
pic1 c:\temp\baby_smiling1.jpeg

sleep 3500
# then die

halt

# note that at this point p3icli should internally execute a 
# "ppt kill discard" command

ALLDONE

tools/delete_init_file.sh     # clean up

diff -bu $logfile $testdata
if [ $? -ne 0 ] ; then 
    echo "test failed!!"
    exit 1
fi

echo "If Powerpoint exited, this test passed."
exit 0
