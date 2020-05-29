#!/bin/sh

# make sure that incorrectly specified pic and cap shape tags are flagged.
# this is a self-checking test...must run multiple times to catch all
# possible errors, because p3icli exits after 8 are reported.  In
# hindsight, that's a limit that a tester might want to override on the
# command line.

logfile_locn1=c:/temp/damaged_shapes_log_file1.txt
logfile_locn2=c:/temp/damaged_shapes_log_file2.txt
logfile_final=c:/temp/damaged_shapes_log_file.txt

rm -f $logfile_locn1
rm -f $logfile_locn2
rm -f $logfile_final

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

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn1 ./test_data_files/damaged_shapes_script1.txt
p3icli -l $logfile_locn2 ./test_data_files/damaged_shapes_script2.txt

tools/delete_init_file.sh     # clean up

cat $logfile_locn1 $logfile_locn2 > $logfile_final

diff -bu $logfile_final test_data_files/damaged_shapes_data.txt
if [ $? -eq 0 ] ; then
    echo "test passed"
    rm -f $logfile_locn1
    rm -f $logfile_locn2
    exit 0
else
    echo 'test failed!!!!!'
    exit 1
fi
