#!/bin/bash
#
# Exercise changes in v3.2, namely:
#
#
#   - Added three new commands that enable removal of image files
#     specified via the pic<uint> <filename> command:
#
#           delete image files {on | off}
#           dif {on | off}           # shortcut for previous command
#           ignore <filename>
#
# This is a self-checking test.
#
logfile0="c:/temp/v32_log0.txt"
logfile1="c:/temp/v32_log1.txt"
logfile2="c:/temp/v32_log2.txt"
logfile3="c:/temp/v32_log3.txt"
logfile4="c:/temp/v32_log4.txt"
logfile5="c:/temp/v32_log5.txt"
logfile6="c:/temp/v32_log6.txt"
logfile7="c:/temp/v32_log7.txt"
logfile8="c:/temp/v32_log8.txt"
testdata0="test_data_files/v32_log0.txt"
testdata1="test_data_files/v32_log1.txt"
testdata2="test_data_files/v32_log2.txt"
testdata3="test_data_files/v32_log3.txt"
testdata4="test_data_files/v32_log4.txt"
testdata5="test_data_files/v32_log5.txt"
testdata6="test_data_files/v32_log6.txt"
testdata7="test_data_files/v32_log7.txt"
testdata8="test_data_files/v32_log8.txt"
script1="test_data_files/v32_script1.txt"
script2="test_data_files/v32_script2.txt"
script3="test_data_files/v32_script3.txt"
script4="test_data_files/v32_script4.txt"
script5="test_data_files/v32_script5.txt"
script6="test_data_files/v32_script6.txt"
script7="test_data_files/v32_script7.txt"
script8="test_data_files/v32_script8.txt"
testdir="c:/temp/p3icli_del_imgs_dir"
filelist1="test_data_files/v32_filelist1.txt"
filelist2="test_data_files/v32_filelist2.txt"
filelist3="test_data_files/v32_filelist3.txt"
tool_script="c:/cm/git/p3icli/test/tools/cp_rm_filelist.sh"


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

# ------------------------- test #0 --------------------------
# exercise the lexer and parser
p3icli  -l $logfile0 <<ALLDONE_2
ignore      
ignore c:\temp\some_made_up_file.png
dif up
   dif down
  dif on
   dif             off
delete
 delete image
    delete     image files

delete image   files on

   delete     image files off      

    ignore         c:\temp\some_other_made_up_file.png
dif onme
delete image files boff
ALLDONE_2

diff -bu $testdata0 $logfile0
if [ $? -eq 0 ] ; then
    echo "lexer/parser test of new v3.2 syntax passed"
    rm -f $logfile0
else
    echo 'lexer/parser test of new v3.2 syntax failed!!!!!'
    exit 1
fi

# ------------------------- test #1 --------------------------

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist1
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A "$testdir")"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #1"
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

# simple test to make sure that toggling dif {on|off} does nothing.
p3icli  -l $logfile1 $script1
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #1 failed!!"
    cat $logfile1
    exit 1
fi

diff -bu $testdata1 $logfile1
if [ $? -ne 0 ] ; then 
    echo "test #1 failed!!"
    exit 1
fi

# looking good so far.  Make sure no pic files deleted.
new_file_list="$(ls -A "$testdir")"
if [ "$old_file_list" != "$new_file_list" ] ; then
    echo "Error: file list in $testdir changed after test #1!"
    echo "test #1 failed!!"
    exit 1
else
    echo "test #1 passed"
    rm -f $logfile1
fi

# ------------------------- test #2 --------------------------

old_file_list=""
new_file_list=""

# begin the induction tests of "dif on" (or "delete image files on")
# first test is for a presentation with two different pics, but dif is only
# "on" for one pic.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    exit 1
fi

# populate test folder with pics for next script (reuse test1 filelist)
$tool_script $testdir cp $filelist1
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A "$testdir")"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #2"
    exit 1
fi

p3icli  -l $logfile2 $script2
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #2 failed!!"
    cat $logfile2
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile2
echo "$old_file_list" >> $logfile2
echo "===== current set of pic files in test dir ===========" >> $logfile2
new_file_list="$(ls -A "$testdir")"
echo "$new_file_list" >> $logfile2

diff -bu $testdata2 $logfile2
if [ $? -ne 0 ] ; then 
    echo "test #2 failed!!"
    exit 1
else
    echo "test #2 passed"
    rm -f $logfile2
fi

# ------------------------- test #3 --------------------------

old_file_list=""
new_file_list=""

# induction tests of "dif on" (or "delete image files on")...
# 2nd test is for a presentation with 3 different pics, but dif is only
# "on" for 2 pics, one of which is made read-only after copying to testdir.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    exit 1
fi

# populate test folder with pics for next script (reuse test1 filelist)
$tool_script $testdir cp $filelist1
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A "$testdir")"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #3"
    exit 1
fi

chmod a-w c:/temp/p3icli_del_imgs_dir/boat.bmp  # p3icli now cannot delete
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    exit 1
fi

p3icli  -D -l $logfile3 $script3
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #3 failed!!"
    cat $logfile3
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile3
echo "$old_file_list" >> $logfile3
echo "===== current set of pic files in test dir ===========" >> $logfile3
new_file_list="$(ls -A "$testdir")"
echo "$new_file_list" >> $logfile3

diff -bu $testdata3 $logfile3
if [ $? -ne 0 ] ; then 
    echo "test #3 failed!!"
    chmod u+w c:/temp/p3icli_del_imgs_dir/boat.bmp   # allow cleanup
    exit 1
else
    echo "test #3 passed"
    rm -f $logfile3
fi

chmod u+w c:/temp/p3icli_del_imgs_dir/boat.bmp   # allow cleanup

# ------------------------- test #4 --------------------------

old_file_list=""
new_file_list=""

# induction tests of "dif on" (or "delete image files on")...
# 3rd test is for a presentation with 3 different pics, dif is "on"
# for 2 pics.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #4 failed!!"
    exit 1
fi

# populate test folder with pics for next script (reuse test1 filelist)
$tool_script $testdir cp $filelist1
if [ $? -ne 0 ] ; then
    echo "test #4 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A "$testdir")"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #4"
    exit 1
fi

p3icli  -D -l $logfile4 $script4
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #4 failed!!"
    cat $logfile4
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile4
echo "$old_file_list" >> $logfile4
echo "===== current set of pic files in test dir ===========" >> $logfile4
new_file_list="$(ls -A "$testdir")"
echo "$new_file_list" >> $logfile4

diff -bu $testdata4 $logfile4
if [ $? -ne 0 ] ; then 
    echo "test #4 failed!!"
    exit 1
else
    echo "test #4 passed"
    rm -f $logfile4
fi

# ------------------------- test #5 --------------------------

old_file_list=""
new_file_list=""

# induction tests of "dif on" (or "delete image files on")...
# 4th test is for a presentation with 19 different pics, dif is "on"
# for 10 pics.  Also, exercise ignore command.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #5 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist2
if [ $? -ne 0 ] ; then
    echo "test #5 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A $testdir)"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #5"
    exit 1
fi

p3icli  -D -l $logfile5 $script5
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #5 failed!!"
    cat $logfile5
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile5
echo "$old_file_list" >> $logfile5
echo "===== current set of pic files in test dir ===========" >> $logfile5
new_file_list="$(ls -A $testdir)"
echo "$new_file_list" >> $logfile5

diff -bu $testdata5 $logfile5
if [ $? -ne 0 ] ; then 
    echo "test #5 failed!!"
    exit 1
else
    echo "test #5 passed"
    rm -f $logfile5
fi

# ------------------------- test #6 --------------------------

old_file_list=""
new_file_list=""

# induction tests of "dif on" (or "delete image files on")...
# 6th test is for a presentation with 20 different pics, dif is "on"
# for 19 pics.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #6 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist2
if [ $? -ne 0 ] ; then
    echo "test #6 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A $testdir)"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #6"
    exit 1
fi

p3icli  -D -Ex -l $logfile6 $script6
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #6 failed!!"
    cat $logfile6
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile6
echo "$old_file_list" >> $logfile6
echo "===== current set of pic files in test dir ===========" >> $logfile6
new_file_list="$(ls -A $testdir)"
echo "$new_file_list" >> $logfile6

diff -bu $testdata6 $logfile6
if [ $? -ne 0 ] ; then 
    echo "test #6 failed!!"
    exit 1
else
    echo "test #6 passed"
    rm -f $logfile6
fi

# ------------------------- test #7 --------------------------

old_file_list=""
new_file_list=""

# induction tests of "dif on" (or "delete image files on")...
# 7th test is for a presentation with 20 different pics, dif is "on"
# for 20 pics.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #7 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist2
if [ $? -ne 0 ] ; then
    echo "test #7 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A $testdir)"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #7"
    exit 1
fi

p3icli  -D -Ex -l $logfile7 $script7
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #7 failed!!"
    cat $logfile7
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile7
echo "$old_file_list" >> $logfile7
echo "===== current set of pic files in test dir ===========" >> $logfile7
new_file_list="$(ls -A $testdir)"
echo "$new_file_list" >> $logfile7

diff -bu $testdata7 $logfile7
if [ $? -ne 0 ] ; then 
    echo "test #7 failed!!"
    exit 1
else
    echo "test #7 passed"
    rm -f $logfile7
fi

# ------------------------- test #8 --------------------------

old_file_list=""
new_file_list=""

# tests focused on the ignore command.

$tool_script $testdir rm    # make sure testdir is empty before starting
if [ $? -ne 0 ] ; then
    echo "test #8 failed!!"
    exit 1
fi

# populate test folder with pics for next script
$tool_script $testdir cp $filelist3
if [ $? -ne 0 ] ; then
    echo "test #8 failed!!"
    exit 1
fi

# save away a list of files just copied into the test directory
old_file_list="$(ls -A $testdir)"
if [ -z "$old_file_list" ] ; then
    echo "test image dir ( $testdir ) is empty!  Aborting test #8"
    exit 1
fi

p3icli  -D -Ex -l $logfile8 $script8
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #8 failed!!"
    cat $logfile8
    exit 1
fi

# annotate logfile with file listings and diff
echo "===== original set of pic files in test dir ==========" >> $logfile8
echo "$old_file_list" >> $logfile8
echo "===== current set of pic files in test dir ===========" >> $logfile8
new_file_list="$(ls -A $testdir)"
echo "$new_file_list" >> $logfile8

diff -bu $testdata8 $logfile8
if [ $? -ne 0 ] ; then 
    echo "test #8 failed!!"
    exit 1
else
    echo "test #8 passed"
    rm -f $logfile8
fi

# -------------- final cleanup --------------
$tool_script $testdir rm
tools/delete_init_file.sh 

exit 0
