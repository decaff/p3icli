#!/bin/bash
#
# test 2.4 bug fix (run time error)

logfile="c:/temp/v24log.txt"
testdata="test_data_files/v24log.txt"
script="test_data_files/v24_bugfix.txt"

# kill all instances of ppt
p3icli -X <<ALLDONE
    halt
ALLDONE

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
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

echo starting powerpoint...
cmd /c 'start powerpnt'
sleep 2

p3icli -D -l $logfile $script

if [ $? -ne 0 ] ; then 
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile
if [ $? -ne 0 ] ; then 
    echo "test failed!!"
    exit 1
fi

# $script leaves PPT running...fix that
sleep 5       # just a peek at results...not really necessary
p3icli -X <<ALLDONE_2
    halt
ALLDONE_2

echo test passed
exit 0
