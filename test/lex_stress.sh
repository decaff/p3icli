#!/bin/bash

# When the advent of an init file in v3.3, it was noted that p3icli's
# scanner could not correctly lex a file (the init file) and then take
# commands from stdin.  The bug was subsequently fixed.  Test the fix and
# add a couple more test cases.
#
# This is a self-checking test, but keyboard is required for many of
# scripts (due to testing interleaved file and device input streams).

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

logfile_edited="c:/temp/lex_stress_log_edited.txt"
logfile1="c:/temp/lex_stress_log1.txt"
logfile2="c:/temp/lex_stress_log2.txt"
logfile3="c:/temp/lex_stress_log3.txt"
logfile4="c:/temp/lex_stress_log4.txt"
logfile5="c:/temp/lex_stress_log5.txt"
logfile6="c:/temp/lex_stress_log6.txt"
testdata1="test_data_files/lex_stress_log1.txt"
testdata2="test_data_files/lex_stress_log2.txt"
testdata3="test_data_files/lex_stress_log3.txt"
testdata4="test_data_files/lex_stress_log4.txt"
testdata5="test_data_files/lex_stress_log5.txt"
testdata6="test_data_files/lex_stress_log6.txt"
script_a="test_data_files/lex_stress_script_a.txt"
script_b="test_data_files/lex_stress_script_b.txt"

rm -f $logfile1 $logfile2 $logfile3 $logfile4 $logfile5 $logfile6

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

if [ -f $logfile6 ] ; then
    echo cannot remove $logfile6, failed "(exiting)"
    exit 1
fi


# make this test re-entrant in case the init file contains errors
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

p3icli -X << CLEAN_UP
CLEAN_UP

# ------------------------------- Test 1 --------------------------
#                   Test an init file + input from stdin
# -----------------------------------------------------------------

echo "encoding utf8"                                      >  $HOME/.p3iclirc
echo "pics root ${p3icli_root_dos_echo}\test\pics"        >> $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test\tmplts" >> $HOME/.p3iclirc
echo "how about an error? # stress flex and byacc"        >> $HOME/.p3iclirc
echo "ignore c:\yourmom\mom.jpeg"                         >> $HOME/.p3iclirc

p3icli -D4 -l $logfile1 << TEST_1_STDIN
start ppt
sleep 1500
kill ppt discard

blah blah blah    # a syntax error just for authenticity

TEST_1_STDIN

# strip out nonportable, path-specific data from log file...
sed -e  's/\(^p3icli: \).*\(\.p3iclirc(line \)/\1\2/' \
    -e 's/\(init file: \).*\(\.p3iclirc\)/\1\2/'      \
    $logfile1 > $logfile_edited


diff -bu $testdata1 $logfile_edited
if [ $? -ne 0 ] ; then
    echo 'test 1 failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
echo Test 1 passed.
tools/delete_init_file.sh     # clean up

# ------------------------------- Test 2 --------------------------
#   Test an init file + input from stdin + input from a script
# -----------------------------------------------------------------

echo "pics    root ${p3icli_root_dos_echo}\test"          >  $HOME/.p3iclirc
echo "what me, err?"                                      >> $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test"        >> $HOME/.p3iclirc
echo " encoding    ansi"                                  >> $HOME/.p3iclirc
echo " third party fix     on       "                     >> $HOME/.p3iclirc
echo "        and error for fun #  just go with it"       >> $HOME/.p3iclirc
echo " third party    fix     off  "                      >> $HOME/.p3iclirc

echo
echo Type any valid p3icli command at the '> prompt.'
echo Type '{halt|quit|exit}' to exit p3icli....
echo
sleep 2
p3icli -Ex -l $logfile2 con: test_data_files/bom_script1.txt

# strip out nonportable, path-specific data from log file...
sed -e  's/\(^p3icli: \).*\(\.p3iclirc(line \)/\1\2/'  \
    $logfile2 > $logfile_edited

diff -bu $testdata2 $logfile_edited
if [ $? -ne 0 ] ; then
    echo 'test 2 failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
echo Test 2 passed.
tools/delete_init_file.sh     # clean up

# ------------------------------- Test 3 --------------------------
#   Test an init file + input from a script + input from stdin
# -----------------------------------------------------------------

echo '  first line is bad!'                               >  $HOME/.p3iclirc
echo "pics    root ${p3icli_root_dos_echo}\test\pics"     >> $HOME/.p3iclirc
echo " slide size 4:3"                                    >> $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test\tmplts" >> $HOME/.p3iclirc
echo " encoding    ansi"                                  >> $HOME/.p3iclirc
echo " third party fix     on       "                     >> $HOME/.p3iclirc
echo " third party    fix     off  "                      >> $HOME/.p3iclirc
echo '        last line is worse .... fin  # fin'         >> $HOME/.p3iclirc

echo
echo Type any valid p3icli command at the '> prompt.'
echo Type '{halt|quit|exit}' to exit p3icli....
echo
sleep 2
p3icli  -l $logfile3 $script_a con:

# strip out nonportable, path-specific data from log file...
sed -e  's/\(^p3icli: \).*\(\.p3iclirc(line \)/\1\2/'  \
    $logfile3 > $logfile_edited

diff -bu $testdata3 $logfile_edited
if [ $? -ne 0 ] ; then
    echo 'test 3 failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
echo Test 3 passed.
tools/delete_init_file.sh     # clean up

# ------------------------------- Test 4 # ----------------------------------
#   Test init file + input from a script + input from stdin + one more script
# ---------------------------------------------------------------------------

echo " slide size a4"                                >  $HOME/.p3iclirc
echo " pics   root <none>                      "     >> $HOME/.p3iclirc
echo "pics    root ${p3icli_root_dos_echo}\test"     >> $HOME/.p3iclirc
echo " encoding    utf8"                             >> $HOME/.p3iclirc
echo " third party fix     on       "                >> $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test"   >> $HOME/.p3iclirc
echo '   #  what ever I want'                        >> $HOME/.p3iclirc
echo " third party    fix     off  "                 >> $HOME/.p3iclirc
echo " template                 #err #1"             >> $HOME/.p3iclirc
echo " templates                #err     #2  "       >> $HOME/.p3iclirc
echo " encoding    ansi"                             >> $HOME/.p3iclirc
echo '        last line is err .... fin  # err #3'   >> $HOME/.p3iclirc

echo
echo Type any valid p3icli command at the '> prompt.'
echo Type '{halt|quit|exit}' to exit p3icli....
echo
sleep 2
p3icli  -l $logfile4 test_data_files/bom_script2.txt con: $script_a

# strip out nonportable, path-specific data from log file...
sed -e  's/\(^p3icli: \).*\(\.p3iclirc(line \)/\1\2/'  \
    $logfile4 > $logfile_edited

diff -bu $testdata4 $logfile_edited
if [ $? -ne 0 ] ; then
    echo 'test 4 failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
echo Test 4 passed.
tools/delete_init_file.sh     # clean up


# ------------------------------- Test 5 # ----------------------------------
#   Test init file + input from three scripts
# ---------------------------------------------------------------------------

echo " slide size default     "                      >  $HOME/.p3iclirc
echo " pics   root <none>                      "     >> $HOME/.p3iclirc
echo " templates   root <none>                 "     >> $HOME/.p3iclirc
echo " ignore c:\some\path\to\a.jpeg"                >> $HOME/.p3iclirc
echo " copy src fmt on  "                            >> $HOME/.p3iclirc
echo '   #  an  annotation  '                        >> $HOME/.p3iclirc
echo " third party    fix     off  "                 >> $HOME/.p3iclirc
echo " encoding    ansi"                             >> $HOME/.p3iclirc
echo '        this line is err .... fin  # err #1'   >> $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test"   >> $HOME/.p3iclirc

p3icli -Ex -l $logfile5 $script_b test_data_files/bom_script1.txt  $script_a

# strip out nonportable, path-specific data from log file...
sed -e  's/\(^p3icli: \).*\(\.p3iclirc(line \)/\1\2/'  \
    $logfile5 > $logfile_edited

diff -bu $testdata5 $logfile_edited
if [ $? -ne 0 ] ; then
    echo 'test 5 failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
echo Test 5 passed.
tools/delete_init_file.sh     # clean up

# ------------------------------- Test 6 # ----------------------------------
#   Test stdin + input from 4 scripts
# ---------------------------------------------------------------------------

echo "templates root ${p3icli_root_dos_echo}\test"   >  $HOME/.p3iclirc
echo "pics    root ${p3icli_root_dos_echo}\test"     >> $HOME/.p3iclirc

echo
echo Type any valid p3icli command at the '> prompt.'
echo Type '{halt|quit|exit}' to exit p3icli....
echo
sleep 2

p3icli -Ex -l $logfile6 $script_a test_data_files/bom_script[12].txt \
                       con: $script_b

diff -bu $testdata6 $logfile6
if [ $? -ne 0 ] ; then
    echo 'test 6 failed!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
echo Test 6 passed.  Fin.
tools/delete_init_file.sh     # clean up

exit 0
