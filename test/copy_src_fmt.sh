#!/bin/bash

# Create a presentation that exercises a number of slide background
# elements that must be copied faithfully if "copy src fmt on" .
#
# This is a semi- self-checking test.  If exit code is 0, user of
# this shell script must eyeball the displayed presentation against
# the source template.

logfile="c:/temp/copy_src_fmt_log.txt"
testdata="test_data_files/copy_src_fmt_log.txt"
script="test_data_files/copy_src_fmt.txt"

rm -f $logfile

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

p3icli -X << CLEAN_UP
CLEAN_UP

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for the test
# template.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile $script

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

diff -bu $testdata $logfile
if [ $? -ne 0 ] ; then
    echo 'test failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up
echo Test passed.  Visually verify that slide background formatting in the
echo current presentation is correctly displayed, based on this script:
cat -n $script
exit 0
