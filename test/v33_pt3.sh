#!/bin/bash
#
# Exercise another change in v3.3, namely:
#
#   - "ignore <filename>" honors "pics root <folder>"
#
# This is a self-checking test.
#

logfile5="c:/temp/v33_log5.txt"
testdata5="test_data_files/v33_log5.txt"
script="test_data_files/ignore_pics_root_script.txt"
testdir_unix="c:/temp/p3icli_del_imgs_dir"
filelist1="test_data_files/v33_filelist1.txt"
tool_script="./tools/cp_rm_filelist.sh"

rm -f $logfile5

if [ -f $logfile5 ] ; then
    echo cannot remove $logfile5, failed "(exiting)"
    exit 1
fi

if [ ! -d $testdir_unix ] ; then
    mkdir $testdir_unix
fi
if [ ! -d $testdir_unix ] ; then
    echo "Unable to create $testdir_unix .  Aborting!"
    exit 1
fi

# ------------ don't want an old init file polluting the test --------------
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

# -------- Establish pic files that can be indiscriminately nuked -----------
$tool_script $testdir_unix rm  # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    exit 1
fi

# populate testdir with pics for next script
$tool_script $testdir_unix cp $filelist1
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" > $HOME/.p3iclirc

# --------------------------------------------------------------------------

# save away a list of files just copied into the test directory
old_file_list="$(ls -A "$testdir_unix")"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir_unix ) is empty!  Aborting test #1"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

p3icli -l $logfile5 $script
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero p3icli status...test failed!!"
    tools/delete_init_file.sh     # clean up
    cat $logfile5
    exit 1
fi

tools/delete_init_file.sh     # clean up

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile5
echo "$old_file_list" >> $logfile5
echo "===== current set of pic files in test dir ===========" >> $logfile5
new_file_list="$(ls -A "$testdir_unix")"
echo "$new_file_list" >> $logfile5

diff -bu $testdata5 $logfile5
if [ $? -ne 0 ] ; then 
    echo "test failed!!"
    exit 1
else
    echo "test passed"
    rm -f $logfile5
fi
exit 0

