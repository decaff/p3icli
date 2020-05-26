#!/bin/bash

# test that p3icli's lexer will correctly flag a single-char token that 
# has its high-order bit set, but not flag a qstring that contains same.
# 
# requires p3icli V2.5 or later

logfile_locn1=c:/temp/lex_warning_tests_log_file1.txt
logfile_locn2=c:/temp/lex_warning_tests_log_file2.txt
logfile_locn_10=c:/temp/lex_warning_tests_log_file_10.txt
logfile_final=c:/temp/lex_warning_tests_log_file.txt

rm -f $logfile_locn1
rm -f $logfile_locn2
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

if [ -f $logfile_locn_10 ] ; then
    echo cannot remove $logfile_locn_10, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_final ] ; then
    echo cannot remove $logfile_final, failed "(exiting)"
    exit 1
fi

# validate test script file types
# first script has a UTF-8 BOM
file ./test_data_files/lex_warning_script1.txt >  $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo file script1 failed
    exit 1
fi

# second script => no UTF-8 BOM
file ./test_data_files/lex_warning_script2.txt >> $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo file script2 failed
    exit 1
fi
od -xc ./test_data_files/lex_warning_script1.txt | head -6 >> $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo 'od -xc script1 failed'
    exit 1
fi
od -xc ./test_data_files/lex_warning_script2.txt | head -8 >> $logfile_locn_10
if [ $? -ne 0 ] ; then
    echo 'od -xc script2 failed'
    exit 1
fi

diff -bu test_data_files/lex_warning_validation_data.txt $logfile_locn_10
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

echo "pics root ${p3icli_root_dos_echo}\test\pics"        >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test\tmplts" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

# begin tests

p3icli -X <<DONE
    halt
DONE

#
# test number 1
#
p3icli -l $logfile_locn1 ./test_data_files/lex_warning_script1.txt

#
# test number 2
#
p3icli -l $logfile_locn2 ./test_data_files/lex_warning_script2.txt

tools/delete_init_file.sh     # clean up

cat $logfile_locn1 \
    $logfile_locn2 \
                    > $logfile_final

diff -bu test_data_files/lex_warning_data.txt $logfile_final
if [ $? -eq 0 ] ; then
    echo "test passed"
    rm -f $logfile_locn1
    rm -f $logfile_locn2
    rm -f $logfile_logfile_final
else
    echo 'test failed!!!!!'
    exit 1
fi
exit 0
