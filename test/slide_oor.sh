#!/bin/bash
#
# In v2.6, slide OOR testing was moved around and so it should be tested

testdata="test_data_files/slide_oor_data.txt"
logfile_locn1="c:/temp/slide_oor_log_file1.txt"
logfile_locn2="c:/temp/slide_oor_log_file2.txt"
logfile_final="c:/temp/slide_oor_log.txt"
script1="test_data_files/slide_oor_script1.txt"
script2="test_data_files/slide_oor_script2.txt"

# kill all instances of ppt
p3icli -X <<ALLDONE
    halt
ALLDONE

rm -f $logfile_locn1 $logfile_locn2 $logfile_final

if [ -f $logfile_locn1 ] ; then
    echo cannot remove $logfile_locn1, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn2 ] ; then
    echo cannot remove $logfile_locn2, failed "(exiting)"
    exit 1
fi
if [ -f $logfile_final ] ; then
    echo cannot remove $logfile_final, failed "(exiting)"
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

echo "templates root ${p3icli_root_dos_echo}\test\tmplts" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn1 $script1
p3icli -l $logfile_locn2 $script2

cat $logfile_locn1 $logfile_locn2 > $logfile_final

diff -bu $testdata $logfile_final
if [ $? -eq 0 ] ; then 
    echo "test passed"
    rm -f $logfile_locn1
    rm -f $logfile_locn2
    tools/delete_init_file.sh     # clean up
    exit 0
else
    echo "test failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi
