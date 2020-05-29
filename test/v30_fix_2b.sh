#!/bin/bash
#
# On a Win10 host running PowerPoint 2016, a couple simple tests caused
# p3icli v2.9 (and probably earlier versions as well) to leak a single
# (orphan) instance of PowerPoint when a p3icli-initiated PowerPoint
# process is manually closed.  The fix is to clear the clipboard before
# exiting p3icli iff p3icli pastes a slide at some point in time while
# executing a script.
#
# This is a self-checking test, but PowerPoint must be manually closed by
# the user.
#
logfile="c:/temp/v30_fix_2b_log.txt"
testdata="test_data_files/v30_fix_2b_log.txt"

# this script uses "copy src fmt on", which forces a slide paste
script="test_data_files/utf8_script.txt"

rm -f $logfile

if [ -f $logfile ] ; then
    echo cannot remove "$logfile", failed "(exiting)"
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
else
    rm $logfile
fi

read -n1 -r -p "Close PowerPoint then press any key to continue..." key

# must sleep a bit (on thumping fast hosts...takes time for ppt to actually
# exit the OS's process table).
echo "waiting a bit for PPT to completely exit..."
sleep 3
echo "...done waiting"

ps -W | egrep -q -i powerpnt.exe

if [ $? -eq 0 ] ; then
    echo
    echo "PowerPoint is still running!  Test failed!!"
    exit 1
else
    echo
    echo "test passed"
fi
exit 0
