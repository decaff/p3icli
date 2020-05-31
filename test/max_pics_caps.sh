#!/bin/bash
#
# Make sure that 20 pics and 20 caps on a single slide are "addressable"
# (i.e., can be populated).

logfile="c:/temp/max_pics_caps_log.txt"
testdata="test_data_files/max_pics_caps_log.txt"
script="test_data_files/max_pics_caps_script.txt"

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

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "pics root ${p3icli_root_dos_echo}\test\pics"        >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test\tmplts" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile $script

diff -bu $testdata $logfile
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    tools/delete_init_file.sh     # clean up
    exit 1
else
    rm -f $logfile
fi

tools/delete_init_file.sh     # clean up
echo
echo "No unexpected p3icli errors noted...visually verify this script:"
sleep 2
cat -n $script
exit 0



