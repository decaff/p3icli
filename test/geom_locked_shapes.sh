#!/bin/bash

# make sure that p3icli can move and change the size of shapes with locked
# aspect ratios.  this is a self-checking test.

logfile_locn=c:/temp/geom_data_log_file.txt
testdata="test_data_files/manipulate_locked_shapes_data.txt"

rm -f $logfile_locn

if [ -f $logfile_locn ] ; then
    echo cannot remove $logfile_locn, failed "(exiting)"
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

echo "pics root ${p3icli_root_dos_echo}\test"              >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test\tmplts" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli -l $logfile_locn ./test_data_files/manipulate_locked_shapes_script.txt

diff -bu $logfile_locn $testdata
if [ $? -eq 0 ] ; then
    echo "test passed"
else
    echo 'test failed!!!!!'
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up
exit 0
