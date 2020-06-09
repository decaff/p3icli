#!/bin/bash
#
# Run the documentation examples for:
#
#   - templates root
#   - pics root
#   - ignore vs pics root
#
# And make sure that the results (as far as file concatenation go) are
# legit.  For several test cases, there's no need to create an actual
# presentation...just validate the concatenated paths in error logs.
#
# This is a self-checking test.
#

logfile6="c:/temp/v33_log6.txt"
logfile7="c:/temp/v33_log7.txt"
logfile8="c:/temp/v33_log8.txt"
testdata6="test_data_files/v33_log6.txt"
testdata7="test_data_files/v33_log7.txt"
testdata8="test_data_files/v33_log8.txt"
script1="test_data_files/v33_docu_script1.txt"
script2="test_data_files/v33_docu_script2.txt"
script3="test_data_files/v33_docu_script3.txt"
testdir_unix1="c:/task7"
testdir_unix2="c:/task7/tmplts"
testdir_unix3="c:/task7/pics"
testdir_unix4="c:/task7/pics/stats"

rm -f $logfile6 $logfile7

if [ -f $logfile6 ] ; then
    echo cannot remove $logfile6, failed "(exiting)"
    exit 1
fi

if [ -f $logfile7 ] ; then
    echo cannot remove $logfile7, failed "(exiting)"
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

# next test needs a template in c:/temp
cp ./tmplts/some_slides.pptx c:/temp/mytmplt.pptx
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

p3icli -l $logfile6 $script1

diff -bu $testdata6 $logfile6
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
else
    echo "test #1 passed"
    rm -f $logfile6
fi

# ------ make a bit of a top level folder mess -------------
if [ ! -d $testdir_unix1 ] ; then
    mkdir $testdir_unix1
fi
if [ ! -d $testdir_unix1 ] ; then
    echo "Unable to create $testdir_unix1 .  Aborting!"
    exit 1
fi

if [ ! -d $testdir_unix2 ] ; then
    mkdir $testdir_unix2
fi
if [ ! -d $testdir_unix2 ] ; then
    echo "Unable to create $testdir_unix2 .  Aborting!"
    rmdir $testdir_unix1   #cleanup
    exit 1
fi

if [ ! -d $testdir_unix3 ] ; then
    mkdir $testdir_unix3
fi
if [ ! -d $testdir_unix3 ] ; then
    echo "Unable to create $testdir_unix3 .  Aborting!"
    rmdir $testdir_unix2   #cleanup
    rmdir $testdir_unix1   #cleanup
    exit 1
fi

if [ ! -d $testdir_unix4 ] ; then
    mkdir $testdir_unix4
fi
if [ ! -d $testdir_unix4 ] ; then
    echo "Unable to create $testdir_unix4 .  Aborting!"
    rmdir $testdir_unix3   #cleanup
    rmdir $testdir_unix2   #cleanup
    rmdir $testdir_unix1   #cleanup
    exit 1
fi

# need test decks
cp ./tmplts/some_slides.pptx $testdir_unix2/5_slides.pptx
cp ./tmplts/some_slides.pptx c:/temp/slides.pptx

# need some pics
cp ./pics/multnomah_falls.png $testdir_unix4/fit_y_by_x.png
cp ./pics/bbd1.jpg $testdir_unix4/model4.jpg

p3icli -F -D -l $logfile7 $script2

# cleanup some of the mess
rm $testdir_unix2/5_slides.pptx
rmdir $testdir_unix2

diff -bu $testdata7 $logfile7
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    rm -f $testdir_unix4/fit_y_by_x.png
    rm -f $testdir_unix4/model4.jpg
    rmdir $testdir_unix4
    rmdir $testdir_unix3
    rmdir $testdir_unix1
    exit 1
fi

# now test existence of pic files...
fail=0
if [ ! -f $testdir_unix4/fit_y_by_x.png ] ; then
    echo "test #2 failed!!" "  $testdir_uni4/fit_y_by_x.png was deleted."
    fail=1
fi
if [ -f $testdir_unix4/model4.jpg ] ; then
    echo "test #2 failed!!" "  $testdir_uni4/model4.jpg was NOT deleted."
    fail=1
fi
if [ $fail -eq 1 ] ; then
    rm -f $testdir_unix4/fit_y_by_x.png
    rm -f $testdir_unix4/model4.jpg
    rmdir $testdir_unix4
    rmdir $testdir_unix3
    rmdir $testdir_unix1
    exit 1
fi

echo "test #2 passed"
rm -f $logfile7

# need a pic re-established for test #3
cp ./pics/bbd1.jpg $testdir_unix4/model4.jpg

p3icli -D -l $logfile8 $script3
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    cat $logfile8
    rm -f $testdir_unix4/fit_y_by_x.png
    rm -f $testdir_unix4/model4.jpg
    rmdir $testdir_unix4
    rmdir $testdir_unix3
    rmdir $testdir_unix1
    exit 1
fi

# cleanup the top level mess...all created dirs should be empty
rmdir $testdir_unix4
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!  Unable to rmdir $testdir_unix4'"
    exit 1
fi
rmdir $testdir_unix3
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!  Unable to rmdir $testdir_unix3'"
    exit 1
fi
rmdir $testdir_unix1
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!  Unable to rmdir $testdir_unix1'"
    exit 1
fi

diff -bu $testdata8 $logfile8
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    exit 1
fi

echo "test #3 passed"
rm -f $logfile8
exit 0
