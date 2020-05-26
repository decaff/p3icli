#!/bin/bash
#
# Exercise code that places UTF-8 data in caption and title shapes.
# This is necessarily a visual (eyeball) test.
#
logfile="c:/temp/utf8_log.txt"
testdata="test_data_files/utf8_log.txt"
script="test_data_files/utf8_script.txt"

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

# kill all instances of ppt
p3icli -X <<ALLDONE
    halt
ALLDONE

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

echo starting powerpoint...
cmd /c 'start powerpnt'
sleep 2

p3icli -l $logfile $script

if [ $? -ne 0 ] ; then 
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

diff -bu $logfile $testdata
if [ $? -ne 0 ] ; then 
    echo "test failed!!"
    exit 1
fi
echo test passed
echo "need to validate this script"
cat -n $script
exit 0
