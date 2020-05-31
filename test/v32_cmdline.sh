#!/bin/bash
#
# Exercise cmdline changes in v3.2, namely:
#
#   p3icli -F
#
# This is a self-checking test.
#
logfile1="c:/temp/v32_cmdline_log1.txt"
logfile2="c:/temp/v32_cmdline_log2.txt"
testdata1="test_data_files/v32_cmdline_log1.txt"
testdata2="test_data_files/v32_cmdline_log2.txt"
script="test_data_files/v32_cmdline_script.txt"
testdir="c:/temp/p3icli_del_imgs_dir"
filelist="test_data_files/v32_filelist3.txt"
tool_script="c:/cm/git/p3icli/test/tools/cp_rm_filelist.sh"

rm -f $logfile1 $logfile2

if [ -f $logfile1 ] ; then
    echo cannot remove $logfile1, failed "(exiting)"
    exit 1
fi
if [ -f $logfile2 ] ; then
    echo cannot remove $logfile2, failed "(exiting)"
    exit 1
fi

if [ ! -d $testdir ] ; then
    mkdir $testdir
fi
if [ ! -d $testdir ] ; then
    echo "Unable to create $testdir .  Aborting!"
    exit 2
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

# ------------------------- test #1 --------------------------

old_file_list=""
new_file_list=""

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A $testdir)"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #1"
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

# this test will include a syntax error in log, thus non-zero exit status
p3icli  -D -Ex -l $logfile1 $script

tools/delete_init_file.sh     # clean up

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile1
echo "$old_file_list" >> $logfile1
echo "===== current set of pic files in test dir ===========" >> $logfile1
new_file_list="$(ls -A $testdir)"
echo "$new_file_list" >> $logfile1

diff -bu $testdata1 $logfile1
if [ $? -ne 0 ] ; then 
    echo "test #1 failed!!"
    exit 1
else
    echo "test #1 passed"
    rm -f $logfile1
fi

# ------------------------- test #2 --------------------------

old_file_list=""
new_file_list=""

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A $testdir)"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #2"
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

# this test will include a syntax error in log, thus non-zero exit status
p3icli  -D -F -Ex -l $logfile2 $script

tools/delete_init_file.sh     # clean up

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile2
echo "$old_file_list" >> $logfile2
echo "===== current set of pic files in test dir ===========" >> $logfile2
new_file_list="$(ls -A $testdir)"
echo "$new_file_list" >> $logfile2

diff -bu $testdata2 $logfile2
if [ $? -ne 0 ] ; then 
    echo "test #2 failed!!"
    exit 1
else
    echo "test #2 passed"
    rm -f $logfile2
fi

# -------------- final cleanup --------------
$tool_script $testdir rm
exit 0
