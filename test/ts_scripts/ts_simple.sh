#!/bin/bash

# Establishes necessary conditions and command line switches to execute
# task_sched_simple.txt from the Windows task scheduler.

# Note that evaluation of the pass/fail status of running
# task_sched_simple.txt is strictly visual.  Obviously, a non-zero
# exit code returned by p3icli is a FAILURE.  But beyond that,
# the results of the presentations created by p3icli must be eyeballed
# as either satisfactory or unsatisfactory.

logfile="c:/temp/ts_log.txt"
script="./task_sched_simple.txt"
created_pres1=" c:/temp/example.pptx"
created_pres2=" c:/temp/sales_summary.pptx"

rm -f $logfile $created_pres1 $created_pres2

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

if [ -f $created_pres1 ] ; then
    echo cannot remove $created_pres1, failed "(exiting)"
    exit 1
fi

if [ -f $created_pres2 ] ; then
    echo cannot remove $created_pres2, failed "(exiting)"
    exit 1
fi

# ------------------------------------------------------------------------
# Must establish the current working directory of the desired test script.
# ------------------------------------------------------------------------

ts_test_dir=$(dirname -- $0)

cd $ts_test_dir    # should now be working from the test/ts_script folder in
                   # the p3icli development tree.
if [ $? -ne 0 ] ; then
    echo "cannot cd to dir ${ts_test_dir}" '...aborting!'
    exit 1
fi

# don't want an init file polluting the test results
../tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish initial test conditions, aborting.'
    exit 1
fi

# --------------------------------------------------------------------------
# Create an init file that portably specifies the root folder for test
# templates.

# grab the locn of the p3icli root development folder
source ../tools/p3icli_root_path.sh

echo "templates root ${p3icli_root_dos_echo}" > $HOME/.p3iclirc
# --------------------------------------------------------------------------

../p3icli -T 13000 -l $logfile $script
exit_code=$?
if [ $exit_code -ne 0 ] ; then
    echo 'p3icli exited with error(s)'
fi
../tools/delete_init_file.sh     # clean up
exit $exit_code
