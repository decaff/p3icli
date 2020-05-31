#!/bin/bash
#
# test v 2.3 p3icli feature (the -x command line switch)

logfile="c:/temp/v23log.txt"
logfile_edited="c:/temp/v23log_edited.txt"
testdata="test_data_files/v23log.txt"
script1="test_data_files/doc_example1.txt"
script2="test_data_files/doc_example2.txt"

# don't want an init file polluting the test results
tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

echo testing -X "command line switch (no log file, trivial script)"

p3icli -X << ALLDONE
    start ppt
    sleep 2000
ALLDONE

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    exit 1
fi

echo "powerpoint should be dead..."
sleep 3

echo "testing -X command line switch...single script with log file"

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile -X $script1
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up

echo "powerpoint should (again) be dead..."
sleep 3

# time to test the output of the log file, after removing time
# dependent data that will not diff correctly.
sed -e 's/[0-9][0-9][0-9]/XXX/' -e 's/[0-9][0-9]/XX/g' \
                                         $logfile > $logfile_edited

diff -bu $logfile_edited $testdata
if [ $? -ne 0 ] ; then
    echo "log file test failed!!"
    exit 1
fi
rm $logfile_edited

echo "testing -X command line switch...two scripts with log file"

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile -X $script1 $script2
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up

echo "powerpoint should (again) be dead..."
sleep 3

# time to test the output of the log file, after removing time
# dependent data that will not diff correctly.
sed -e 's/[0-9][0-9][0-9]/XXX/' -e 's/[0-9][0-9]/XX/g' \
                                         $logfile > $logfile_edited

diff -bu $logfile_edited $testdata
if [ $? -ne 0 ] ; then
    echo "2nd log file test failed!!"
    exit 1
else
    rm $logfile_edited $logfile
    echo test passed
    exit 0
fi
