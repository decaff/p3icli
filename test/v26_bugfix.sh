#!/bin/bash
#
# test 2.6 bug fix (.pptx suffix not honored during save as)
# this test is N/A for powerpoint 2003

logfile="c:/temp/v26log.txt"
testdata="test_data_files/v26log.txt"
testpres="c:/temp/must_be_pptx_fmt.pptx"

# kill all instances of ppt
p3icli -X <<ALLDONE
    halt
ALLDONE

rm -f $logfile
rm -f $testpres

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

if [ -f $testpres ] ; then
    echo cannot remove $testpres, failed "(exiting)"
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

echo "This test ensures that a presentation with a .pptx suffix can be created."
echo "...test fails w/ PPT 2003"
sleep 2

p3icli -l $logfile test_data_files/v26_bugfix.txt

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

if [ -f $testpres ] ; then
    echo test passed
    echo PPT must be manually closed....
    exit 0
else
    echo test failed, $testpres not created
    exit 1
fi
