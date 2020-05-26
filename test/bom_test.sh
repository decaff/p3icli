#!/bin/bash

# test that p3icli's lexer will correctly ignore a UTF-8 byte order mark
# prepended to a script.
#
# requires p3icli V2.5 or later

logfile_locn1=c:/temp/bom_tests_log_file1.txt
logfile_locn2=c:/temp/bom_tests_log_file2.txt
logfile_locn3=c:/temp/bom_tests_log_file3.txt
logfile_locn4=c:/temp/bom_tests_log_file4.txt
logfile_locn5=c:/temp/bom_tests_log_file5.txt
logfile_locn_10=c:/temp/bom_tests_log_file_10.txt
logfile_final=c:/temp/bom_tests_log_file.txt
script1="test_data_files/bom_script1.txt"
script2="test_data_files/bom_script2.txt"

rm -f $logfile_locn1
rm -f $logfile_locn2
rm -f $logfile_locn3
rm -f $logfile_locn4
rm -f $logfile_locn5
rm -f $logfile_locn_10
rm -f $logfile_final

if [ -f $logfile_locn1 ] ; then
    echo cannot remove $logfile_locn1, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn2 ] ; then
    echo cannot remove $logfile_locn2, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn3 ] ; then
    echo cannot remove $logfile_locn3, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn4 ] ; then
    echo cannot remove $logfile_locn4, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn5 ] ; then
    echo cannot remove $logfile_locn5, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn_10 ] ; then
    echo cannot remove $logfile_locn_10, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_final ] ; then
    echo cannot remove $logfile_final, failed "(exiting)"
    exit 1
fi

# validate test scripts are utf-8 with BOM
file ./$script1 >  $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo file $script1 failed
    exit 1
fi
file ./$script2 >> $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo file $script2 failed
    exit 1
fi
od -xc ./$script1 | head -2 >> $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo od $script1 failed
    exit 1
fi
od -xc ./$script2 | head -2 >> $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo od $script2 failed
    exit 1
fi

diff -bu test_data_files/bom_validation_data.txt $logfile_locn_10
if [ $? -eq 0 ] ; then
    rm -f $logfile_locn_10
else
    echo test preconditions failed
    exit 1
fi

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

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

# begin tests

p3icli -l $logfile_locn1 $script1
p3icli -l $logfile_locn2 $script2

#
# now exercise lexer internal logic when multiple cmdline files are processed
#

# 2 cmdline files
p3icli -l $logfile_locn3 $script1 $script2
# 3 cmdline files
p3icli -l $logfile_locn4 ./test_data_files/bom_script[12].txt \
                         ./test_data_files/bom_script2.txt
# 4 cmdline files
p3icli -l $logfile_locn5 ./test_data_files/bom_script2.txt \
                         ./test_data_files/bom_script1.txt            \
                         ./test_data_files/bom_script[12].txt

cat $logfile_locn1 \
    $logfile_locn2 \
    $logfile_locn3 \
    $logfile_locn4 \
    $logfile_locn5 \
                    > $logfile_final

diff -bu test_data_files/bom_data.txt $logfile_final
if [ $? -eq 0 ] ; then
    echo "test passed"
    rm -f $logfile_locn1
    rm -f $logfile_locn2
    rm -f $logfile_locn3
    rm -f $logfile_locn4
    rm -f $logfile_locn5
    rm -f $logfile_final
    tools/delete_init_file.sh     # clean up
else
    echo 'test failed!!!!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi
exit 0
