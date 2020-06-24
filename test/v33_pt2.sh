#!/bin/bash
#
# Tests:
#
#     + This functionality in the grammar:
#
#           templates root { <folder> | '<'none'>' }
#
# This is a semi- self-checking test.
#

logfile_edited="c:/temp/v33_log_edited.txt"
logfile4="c:/temp/v33_log4.txt"
testdata4="test_data_files/v33_log4.txt"
script_b="test_data_files/templates_root_script.txt"
script_edited="c:/temp/v33_root_script_edited.txt"

rm -f $logfile4

if [ -f $logfile4 ] ; then
    echo cannot remove $logfile4, failed "(exiting)"
    exit 1
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
    echo "unexpected non-zero status...'-X' cmd test failed"
    exit 1
fi

# ------------------------- test --------------------------

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

# this test needs a template in c:/temp
cp ./tmplts/demo.potx c:/temp/.
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# Add the root development folder(s) and display strings to the next script....
sed -e "s/_ROOT/${p3icli_root_dos_subst}/"                           \
    -e "s/_X2ROOT/${p3icli_root_dos_subst_x2}/"                      \
    -e "s/_TMPLT/${p3icli_root_dos_subst}"'\\test\\tmplts/'          \
    -e "s/_X2TMPLT/${p3icli_root_dos_subst_x2}"'\\\\test\\\\tmplts/' \
    -e "s/_TEST/${p3icli_root_dos_subst}"'\\test/'                   \
    -e "s/_X2TEST/${p3icli_root_dos_subst_x2}"'\\\\test/'            \
    $script_b > $script_edited

p3icli -D2 -Ex -l $logfile4 $script_edited

# 1) strip out nonportable, path-specific data from log file...
# 2) When opening a nonexistent template file, Office 2010 uses a different
#    error message than later versions of PPT.  Remove the differing
#    verbiage from the log file.
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    -e  's/\(^PPT: line 65: error: \).*$/\1/'                         \
    $logfile4 > $logfile_edited

diff -bu $testdata4 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "root grammar test #4 failed!!"
    exit 1
else
    echo "root grammar #4 passed, eyeball the results of this script:"
    sleep 2
    cat -n $script_b
    rm -f $logfile4
fi
exit 0
