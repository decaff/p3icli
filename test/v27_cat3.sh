#!/bin/bash
#
# test 2.7 insert slide sequencing test
#
# V2.7 changed the code that deals with inserting slides into presentations
# such that:
#
#  a) random exceptions are not thrown by PPT during stress testing, and
#  b) Office 2013 does not randomly complain about slides out of range
#     during stress testing, and
#  c) non-slide data on the clipboard (inserted by some other app) does not
#     cause p3icli to report an error during a slide paste.
#
# Taken together, these are instrusive changes.  So, it would be good to
# create presentations that insert multiple slides under all possible code
# paths in semantics.cpp .  For each presentation, a human needs to verify
# that slides were inserted in the correct order.
#
# The different code paths in semantics.cpp can be exercised using these
# 3 syntactic categories:
#
#   copy src fmt on
#   insert slide
#
#   copy src fmt off
#   third party fix off
#   insert slide
#
#   copy src fmt off
#   third party fix on
#   insert slide
#
# We'll use induction testing for each category:
#
#   presentation with 1 slide
#   presentation with 2 slides
#   presentation with 5 slides
#   presentation with 6 slides
#
# Each category will be exercised as its own test script (makes regression
# testing a bit less tedious).

# -------------------------- Category 3 testing ----------------------


logfile="c:/temp/v27_cat3_log.txt"
logfile_edited="c:/temp/v27_cat_log_edited.txt"
testdata="test_data_files/v27_cat3_log.txt"
script="test_data_files/v27_cat3_script.txt"
presentations="c:/temp/v27*.pptx"

rm -f $presentations

rm -f $logfile $logfile_edited

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_edited ] ; then
    echo cannot remove $logfile_edited, failed "(exiting)"
    exit 1
fi

echo
echo "Testing category:"
echo "-----------------"
echo -e "copy src fmt off\nthird party fix on"
echo

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

echo starting powerpoint...
cmd /c 'start powerpnt'
sleep 2

p3icli -D -l $logfile $script

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

tools/delete_init_file.sh     # clean up

# Strip out a "resized presentation" debug message that depends on the
# version of PPT in use
sed -e '/debug: resized presentation/d' $logfile > $logfile_edited

diff -bu $testdata $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test failed!!"
    exit 1
fi
echo test passed
echo "need to validate this script"
cat -n $script
exit 0
