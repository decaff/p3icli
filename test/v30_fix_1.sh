#!/bin/bash
#
# On a Win10 host running PowerPoint 2016, running the following test
# with a preliminary release of v3.0 caused PowerPoint to elicit a PPT:
#
#    "Server threw exception"
#
# error.  p3icli was subsequently modified to use limited retry loops
# when connecting and disconnecting with PPT,  Each retry waits
# progressively longer (by a factor of 2) before retrying.
#
# This is a self-checking test.
#
logfile="c:/temp/v30_fix_1_log.txt"
logfile_edited="c:/temp/v30_fix_1_log_edited.txt"
testdata="test_data_files/v30_fix_1_log.txt"
script="ts_scripts/3rd_party_fix.txt"

rm -f $logfile $logfile_edited

if [ -f $logfile ] ; then
    echo cannot remove "$logfile", failed "(exiting)"
    exit 1
fi

if [ -f $logfile_edited ] ; then
    echo cannot remove "$logfile_edited", failed "(exiting)"
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

p3icli -D -T 1100 -l $logfile $script

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

# time to test the output of the log file, after removing time
# dependent data that will not diff correctly.
#
# also...strip out a "resized presentation" message that depends on the
# version of PPT in use
sed -e 's/\.[0-9][0-9][0-9]/\.XXX/'                      \
    -e 's/\[[0-9][0-9]/[XX/'                             \
    -e 's/\/[0-9][0-9]/\/XX/'                            \
    -e 's/ [0-9][0-9]:[0-9][0-9]:[0-9][0-9]/ XX:XX:XX/'  \
    -e '/debug: resized presentation/d'                  \
                                         $logfile > $logfile_edited

diff -bu $testdata $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    exit 1
else
    rm $logfile_edited $logfile
    echo test passed
fi
exit 0
