#!/bin/bash
#
# Exercise some (but not all) changes in v3.4, namely:
#
#     - insert_slide.cpp modified to return the result of 
#       insert_slide_idx_oor() up the call chain.
#
# There are 3 test cases to consider:
#
#     1) third party fix off, copy src fmt off
#     2) third party fix on,  copy src fmt off
#     3) third party fix off, copy src fmt on
#
# This is a self-checking test.
#
logfile1="c:/temp/v34_log1.txt"
logfile2="c:/temp/v34_log2.txt"
logfile3="c:/temp/v34_log3.txt"
testdata1="test_data_files/v34_log1.txt"
testdata2="test_data_files/v34_log2.txt"
testdata3="test_data_files/v34_log3.txt"
script1="test_data_files/v34_script1.txt"
script2="test_data_files/v34_script2.txt"
script3="test_data_files/v34_script3.txt"

rm -f $logfile1 $logfile2 $logfile3

if [ -f $logfile1 ] ; then
    echo cannot remove $logfile1, failed "(exiting)"
    exit 1
fi

if [ -f $logfile2 ] ; then
    echo cannot remove $logfile2, failed "(exiting)"
    exit 1
fi

if [ -f $logfile3 ] ; then
    echo cannot remove $logfile3, failed "(exiting)"
    exit 1
fi

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# kill all instances of ppt
p3icli -X <<ALLDONE_1
    exit
ALLDONE_1
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...'exit' #1 cmd test failed"
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" >  $HOME/.p3iclirc
echo "pics root      ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

# --------------------------------------------------------------------------
# run test case 1 -- third party fix off, copy src fmt off
#
# Note that no code path in this test calls insert_slide_idx_oor(), so the
# results are a foregone conclusion (i.e., no surprises expected).
# --------------------------------------------------------------------------
p3icli -l $logfile1 $script1

diff -bu $testdata1 $logfile1
if [ $? -eq 0 ] ; then
    echo "test #1 passed"
    rm -f $logfile1
else
    echo "test #1 failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

# --------------------------------------------------------------------------
# run test case 2 -- third party fix on, copy src fmt off
# --------------------------------------------------------------------------
p3icli -l $logfile2 $script2

diff -bu $testdata2 $logfile2
if [ $? -eq 0 ] ; then
    echo "test #2 passed"
    rm -f $logfile2
else
    echo "test #2 failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

# --------------------------------------------------------------------------
# run test case 3 -- third party fix off,  copy src fmt on
# --------------------------------------------------------------------------
p3icli -l $logfile3 $script3

diff -bu $testdata3 $logfile3
if [ $? -eq 0 ] ; then
    echo "test #3 passed"
    rm -f $logfile3
else
    echo "test #3 failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up
exit 0
