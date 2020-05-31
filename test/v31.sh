#!/bin/bash
#
# Exercise changes in v3.1, namely:
#
#     - addition of exit and quit commands
#     - don't complain if a nonexistent custom property is deleted
#     - allow overwriting of existing custom properties (no error
#       reported)
#     - make negative custom property numbers work with PPT (must
#       be typed as "float").
#
# This is a self-checking test.
#
logfile="c:/temp/v31_log.txt"
testdata="test_data_files/v31_log.txt"
script="test_data_files/v31_script.txt"

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

# kill all instances of ppt
p3icli -X <<ALLDONE_1
    exit
ALLDONE_1
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...'exit' #1 cmd test failed"
    exit 1
fi

p3icli  <<ALLDONE_2
# hello there
    quit
# good bye
syntax error right here that should not matter
ALLDONE_2
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...'quit' #1 cmd test failed"
    exit 1
fi

p3icli  <<ALLDONE_3
quit
ALLDONE_3
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...'quit' #2 cmd test failed"
    exit 1
fi

p3icli  <<ALLDONE_4
          # abcdef
exit
     crud here that does not matter
ALLDONE_4
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...'exit' #2 cmd test failed"
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}\test" > $HOME/.p3iclirc
# --------------------------------------------------------------------------


# now test custom prop features added in v3.1

p3icli -D -l $logfile $script

tools/delete_init_file.sh     # clean up

diff -bu $testdata $logfile
if [ $? -eq 0 ] ; then
    echo "test passed"
    rm -f $logfile
    echo "look @ custom props and see if they agree with this script..."
    sleep 2
    cat $script
else
    echo "v31 custom props test failed!!"
    exit 1
fi

exit 0
