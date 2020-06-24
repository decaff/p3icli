#!/bin/bash
#
# Test the p3icli init files feature.  This is a self-checking test.
#
# p3icli looks for an init file (which is just another p3icli script) in
# these folders and in this order:
#
#      $HOME/.p3iclirc                    [ init file pref #1]
#      $HOME/_p3iclirc                    [ init file pref #2]
#      $USERPROFILE/p3icli_init.txt       [ init file pref #3]
#
# Note that no effort is made to test actual, legitimate use of
# $HOME/.p3iclirc due to the fact that that particular init file is used
# HEAVILY in almost every test script in the p3icli test suite.

logfile1="c:/temp/init_files_log1.txt"
logfile2="c:/temp/init_files_log2.txt"
logfile3="c:/temp/init_files_log3.txt"
logfile4="c:/temp/init_files_log4.txt"
logfile5="c:/temp/init_files_log5.txt"
logfile_edited="c:/temp/init_files_log_edited.txt"
testdata1="test_data_files/init_files_log1.txt"
testdata2="test_data_files/init_files_log2.txt"
testdata3="test_data_files/init_files_log3.txt"
testdata4="test_data_files/init_files_log4.txt"
testdata5="test_data_files/init_files_log5.txt"
script="ts_scripts/task_sched_cpy_fmt.txt"

rm -f $logfile1 $logfile2 $logfile3 $logfile4 $logfile5 $logfile_edited

if [ -f $logfile1 ] ; then
    echo cannot remove $logfile1, failed "(exiting)"
    exit 1
fi

if [ -f $logfile2 ] ; then
    echo cannot remove $logfile2, failed "(exiting)"
    exit 1
fi

if [ -f $logfile3 ] ; then
    echo cannot remove $logfile3, failed "(exiting)"
    exit 1
fi

if [ -f $logfile4 ] ; then
    echo cannot remove $logfile4, failed "(exiting)"
    exit 1
fi

if [ -f $logfile5 ] ; then
    echo cannot remove $logfile5, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_edited ] ; then
    echo cannot remove $logfile_edited, failed "(exiting)"
    exit 1
fi

if [ -z ${HOME+x} ]
then
    echo 'Whoa!' The '$'HOME env var is not defined.  The HOME folder is
    echo important for init file testing and is used by almost every p3icli
    echo test.
    echo
    echo You need to create '$'HOME and try again.  Aborting.
    exit 1
fi

if [ -z ${USERPROFILE+x} ]
then
    echo 'Whoa!' The '$'USERPROFILE env var is not defined.  The USERPROFILE
    echo env var is echo important for init file testing and could be used
    echo by almost any p3icli user.  This variable should have been defined
    echo automagically by Windows.
    echo
    echo You need to create '$'USERPROFILE and/or investigate your Windows
    echo config and try again.  Aborting.
    exit 1
fi


# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# kill all instances of ppt
p3icli <<ALLDONE
    kill ppt discard
ALLDONE

# ------------------------------ Test #1 ------------------------------------
# Create init files with syntax errors.

echo "i am a syntax error"        > $HOME/.p3iclirc
echo "i am also a syntax error"   > $HOME/_p3iclirc
echo "me three as a syntax error" > $USERPROFILE/p3icli_init.txt
# --------------------------------------------------------------------------

# -D4 to semi-validate the path used to open an init file
p3icli -D4 -l $logfile1 << TEST_1
    kill ppt discard
    encoding ansi
TEST_1

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data from .p3iclirc (the init file
# that p3icli _should_ open) from the collected log file...
#
# First sed expression is straightforward, 2nd sed expression filters out
# path data in a syntax error message.
sed -e "s/\(debug: opening init file: \).*\(\.p3iclirc.*\)/\1\2/"    \
    -e "s/^\(p3icli: \).*\(\.p3iclirc(line .*\)/\1\2/"                    \
    $logfile1 > $logfile_edited

diff -bu $testdata1 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #1 failed!!"
    exit 1
fi
echo "test #1 passed"

# ------------------------------ Test #2 ------------------------------------

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# Create init files with syntax errors.
echo "# empty line"                   >  $HOME/_p3iclirc
echo "but I am a syntax error"        >> $HOME/_p3iclirc
echo "pics root  #oops       "        >> $HOME/_p3iclirc
echo "# empty line"                   >  $USERPROFILE/p3icli_init.txt
echo "here are a syntax error"        >> $USERPROFILE/p3icli_init.txt
echo "templated root <none> # not ok" >> $USERPROFILE/p3icli_init.txt

# -D4 to semi-validate the path used to open an init file
p3icli -D4 -l $logfile2 << TEST_2
    kill ppt discard
    encoding utf8
    copy src fmt off
    slide size default
TEST_2

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data to _p3iclirc (the init file
# that p3icli _should_ open) from the collected log file...
#
# First sed expression is straightforward, 2nd sed expression filters out
# path data in a syntax error message.
sed -e "s/\(debug: opening init file: \).*\(\_p3iclirc.*\)/\1\2/"    \
    -e "s/^\(p3icli: \).*\(\_p3iclirc(line .*\)/\1\2/"               \
    $logfile2 > $logfile_edited

diff -bu $testdata2 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #2 failed!!"
    exit 1
fi
echo "test #2 passed"

# ------------------------------ Test #3 ------------------------------------

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# Create init files with syntax errors.
echo " empty line (whoops)"       >  $USERPROFILE/p3icli_init.txt
echo "# empty thought#"           >> $USERPROFILE/p3icli_init.txt
echo "pics root <none>"           >> $USERPROFILE/p3icli_init.txt
echo "          <none> # wut?"    >> $USERPROFILE/p3icli_init.txt
echo "here are a syntax error"    >> $USERPROFILE/p3icli_init.txt
echo "templates root <none> # ok" >> $USERPROFILE/p3icli_init.txt

# -D4 to semi-validate the path used to open an init file
p3icli -D4 -l $logfile3 << TEST_3
    kill ppt discard
    encoding utf8
    third party fix on
    slide size default
    sleep 40
    quit
TEST_3

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data to p3icli_init.txt (the init file
# that p3icli _should_ open) from the collected log file...
#
# First sed expression is straightforward, 2nd sed expression filters out
# path data in a syntax error message.
sed -e "s/\(debug: opening init file: \).*\(\p3icli_init\.txt.*\)/\1\2/"    \
    -e "s/^\(p3icli: \).*\(\p3icli_init\.txt(line .*\)/\1\2/"                    \
    $logfile3 > $logfile_edited

diff -bu $testdata3 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #3 failed!!"
    exit 1
fi
echo "test #3 passed"

# ------------------------------ Test #4 ------------------------------------

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

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/_p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/_p3iclirc
# --------------------------------------------------------------------------

# prove that init file pref #2 actually builds a real presentation
# using templates and pictures.

# -D4 to semi-validate the path used to open an init file
p3icli -D4 -l $logfile4 $script

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #4 failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data to _p3iclirc (the init file
# that p3icli _should_ open) from the collected log file...
sed -e "s/\(debug: opening init file: \).*\(\_p3iclirc.*\)/\1\2/"       \
    -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/"   \
    $logfile4 > $logfile_edited

diff -bu $testdata4 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #4 failed!!"
    exit 1
fi
echo "test #4 passed"

# ------------------------------ Test #5 ------------------------------------

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

echo "pics root ${p3icli_root_dos_echo}\test"      >  \
                                                $USERPROFILE/p3icli_init.txt
echo "templates root ${p3icli_root_dos_echo}\test" >> \
                                                $USERPROFILE/p3icli_init.txt
# --------------------------------------------------------------------------

# prove that init file pref #3 actually builds a real presentation
# using templates and pictures.

# -D4 to semi-validate the path used to open an init file
p3icli -D4 -l $logfile5 $script

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #5 failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data to p3icli_init.txt (the init file
# that p3icli _should_ open) from the collected log file...
sed -e "s/\(debug: opening init file: \).*\(\p3icli_init\.txt.*\)/\1\2/"  \
    -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/"     \
    $logfile5 > $logfile_edited

diff -bu $testdata5 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #5 failed!!"
    exit 1
fi
echo "test #5 passed"

# --------------------------------------------------------------------------
# Office 2010 will leave an empty PPT presentation on screen after the last
# test.  Kill that...

p3icli << TESTS_FIN
    kill ppt discard
TESTS_FIN

exit 0
