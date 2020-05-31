#!/bin/bash
#
# Tests:
#     + At debug level > 5, the flex token table sorting is tested for
#       proper sorting.
#
#     + This functionality in the grammar:
#
#           pics root { <folder> | '<'none'>' }
#
# This is a semi- self-checking test.
#
logfile_edited="c:/temp/v33_log_edited.txt"
logfile1="c:/temp/v33_log1.txt"
logfile2="c:/temp/v33_log2.txt"
logfile3="c:/temp/v33_log3.txt"
testdata1="test_data_files/v33_log1.txt"
testdata2="test_data_files/v33_log2.txt"
testdata3="test_data_files/v33_log3.txt"
script_a="test_data_files/pics_root_script.txt"
script_edited="c:/temp/v33_root_script_edited.txt"

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
    echo "unexpected non-zero status...'-X' cmd test failed"
    exit 1
fi

# ------------------------- test #1 --------------------------

# There should be no debug message re: flex/lexical analyzer.
p3icli  -D5 -l $logfile1 << TEST_1
    halt
TEST_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #1 failed!!"
    cat $logfile1
    exit 1
fi

diff -bu $testdata1 $logfile1
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
else
    echo "test #1 passed"
    rm -f $logfile1
fi

# ------------------------- test #2 ------------------------------

# This debug level forces a self-test of the analyzer's integrity.
p3icli  -D6 -l $logfile2 << TEST_2
           quit
TEST_2

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #2 failed!!"
    cat $logfile2
    exit 1
fi

diff -bu $testdata2 $logfile2
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    exit 1
else
    echo "test #2 passed"
    rm -f $logfile2
fi

# ------------------------- test #3 --------------------------

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

# Add the root development folder(s) and display strings to the next script....
sed -e  "s/_TMPLT/${p3icli_root_dos_subst}"'\\test\\tmplts/' \
    -e  "s/_TEST/${p3icli_root_dos_subst}"'\\test/'          \
    -e  "s/_X2TEST/${p3icli_root_dos_subst_x2}"'\\\\test/'   \
    -e  "s/_ROOT/${p3icli_root_dos_subst}/"                  \
    -e  "s/_X2ROOT/${p3icli_root_dos_subst_x2}/"             \
    $script_a > $script_edited

p3icli -D2 -Ex -l $logfile3 $script_edited

# strip out nonportable, path-specific data from log file...
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    $logfile3 > $logfile_edited

diff -bu $testdata3 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    exit 1
else
    echo "test #3 passed, eyeball the results of this script:"
    sleep 2
    cat -n $script_a
    rm -f $logfile3
fi
exit 0
