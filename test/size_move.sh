#!/bin/bash

# test semantics of the size and move commands.  this is a self-checking
# test...must run multiple times to catch all possible errors since p3icli
# exits after 8 are reported.  In hindsight, that's a limit that a tester
# might want to override on the command line.  sigh.

logfile_locn1=c:/temp/move_size_tests_log_file1.txt
logfile_locn2=c:/temp/move_size_tests_log_file2.txt
logfile_locn3=c:/temp/move_size_tests_log_file3.txt
logfile_locn4=c:/temp/move_size_tests_log_file4.txt
logfile_locn5=c:/temp/move_size_tests_log_file5.txt
logfile_locn6=c:/temp/move_size_tests_log_file6.txt
logfile_locn7=c:/temp/move_size_tests_log_file7.txt
logfile_locn8=c:/temp/move_size_tests_log_file8.txt
logfile_final=c:/temp/move_size_tests_log_file.txt
logfile_edited=c:/temp/move_size_tests_log_file_edited.txt

rm -f $logfile_locn1
rm -f $logfile_locn2
rm -f $logfile_locn3
rm -f $logfile_locn4
rm -f $logfile_locn5
rm -f $logfile_locn6
rm -f $logfile_locn7
rm -f $logfile_locn8
rm -f $logfile_final
rm -f $logfile_edited

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

if [ -f $logfile_locn6 ] ; then
    echo cannot remove $logfile_locn6, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn7 ] ; then
    echo cannot remove $logfile_locn7, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_locn8 ] ; then
    echo cannot remove $logfile_locn8, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_final ] ; then
    echo cannot remove $logfile_final, failed "(exiting)"
    exit 1
fi

if [ -f $logfile_edited ] ; then
    echo cannot remove $logfile_edited, failed "(exiting)"
    exit 1
fi

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

echo "pics root ${p3icli_root_dos_echo}\test\pics"        >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test\tmplts" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn1 ./test_data_files/move_size_tests_script1.txt
p3icli -l $logfile_locn2 ./test_data_files/move_size_tests_script2.txt
p3icli -l $logfile_locn3 ./test_data_files/move_size_tests_script3.txt
p3icli -l $logfile_locn4 ./test_data_files/move_size_tests_script4.txt
p3icli -l $logfile_locn5 ./test_data_files/move_size_tests_script5.txt
p3icli -l $logfile_locn6 ./test_data_files/move_size_tests_script6.txt
p3icli -l $logfile_locn7 ./test_data_files/move_size_tests_script7.txt
p3icli -l $logfile_locn8 ./test_data_files/move_size_tests_script8.txt

cat $logfile_locn1 \
    $logfile_locn2 \
    $logfile_locn3 \
    $logfile_locn4 \
    $logfile_locn5 \
    $logfile_locn6 \
    $logfile_locn7 \
    $logfile_locn8 \
                    > $logfile_final

tools/delete_init_file.sh     # clean up

# strip out nonportable, path-specific data from log file...
sed -e  \
's/\(warning: stat("\)'"${p3icli_root_dos_subst}"'\\test\\pics\\\(.*$\)/\1\2/' \
    $logfile_final > $logfile_edited

diff -bu test_data_files/move_size_tests_data.txt $logfile_edited
if [ $? -eq 0 ] ; then
    echo "test passed"
    rm -f $logfile_locn1
    rm -f $logfile_locn2
    rm -f $logfile_locn3
    rm -f $logfile_locn4
    rm -f $logfile_locn5
    rm -f $logfile_locn6
    rm -f $logfile_locn7
    rm -f $logfile_locn8
    rm -f $logfile_final
    rm -f $logfile_edited
    exit 0
else
    echo 'test failed!!!!!'
    exit 1
fi
