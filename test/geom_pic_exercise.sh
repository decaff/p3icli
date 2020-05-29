#!/bin/bash

# This is a semi- self-cking script...in the final presentation, pic4 and pic20
# should display images and all others are blank.
#
# Pic1 is eventually moved to the upper left corner of the slide, pic2 to
# the upper right corner, pic19 to the lower left corner, and pic20 to the
# bottom right corner.  Pics 3 and 4 reside the middle of the slide.
#
# Tester should visually validate final presentation's positioning of
# shapes WRT the test script.

logfile=c:/temp/geom_log.txt
testdata="./test_data_files/geom_pic_exercise_data.txt"
script="./test_data_files/geom_pic_exercise_script.txt"

rm -f $logfile
if [ -f $logfile ] ; then
    echo "cannot remove logfile $logfile, exiting"
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

echo "pics root ${p3icli_root_dos_echo}"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile $script
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile
if [ $? -eq 0 ] ; then
    echo test passed
    echo here comes the script...
    sleep 2
    cat $script
else
    echo test failed
    exit 1
fi
exit 0
