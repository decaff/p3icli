#!/bin/bash
# These scripts are run pass/fail.  No errors should be reported.
#
# The first two scripts (halt.txt and zero_liner.txt) caused problems in
# the past with lexical scanning errors due to line termination issues.
#
# No log file is recorded...the tests should run quietly to completion
# with no output and no errors/warnings.

script1="test_data_files/halt.txt"
script2="test_data_files/zero_liner.txt"
script3="ts_scripts/task_sched_cpy_fmt.txt"

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

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# pics and templates.

# grab the locn of the p3icli root development folder
source tools/p3icli_root_path.sh

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

p3icli $script1 $scipt2 $script3

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up
echo test passed
exit 0
