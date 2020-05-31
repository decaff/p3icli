#!/bin/bash
#
# On a Win10 host running PowerPoint 2016, a couple simple tests caused
# p3icli v2.9 (and probably earlier versions as well) to leak a single
# (orphan) instance of PowerPoint when a p3icli-initiated PowerPoint
# process is manually closed.  The fix is to clear the clipboard before
# exiting p3icli iff p3icli pastes a slide at some point in time while
# executing a script.
#
# This is a self-checking test, but PowerPoint might need to be manually
# closed by the user (necessary for Office 2003, but not Office 2016).
#
logfile="c:/temp/v30_fix_2a_log.txt"
logfile_edited="c:/temp/v30_fix_2a_log_edited.txt"
testdata="test_data_files/v30_fix_2a_log.txt"

# this script uses "third party fix on", which forces a slide paste
script="ts_scripts/3rd_party_fix.txt"

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

# Strip out a "resized presentation" message that depends on the
# version of PPT in use
sed -e '/debug: resized presentation/d' $logfile > $logfile_edited

diff -bu $testdata $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    exit 1
else
    rm $logfile
fi

read -n1 -r \
   -p "Close PowerPoint (if necessary) then press any key to continue..." key

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
