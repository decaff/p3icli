#!/bin/bash

# A long ago, there was a version of p3icli that could not handle a failed
# "open template".  Test that bug fix.  This is a semi- self-checking test.

logfile="c:/temp/ole_err_log.txt"
testdata="test_data_files/ole_err_log.txt"

rm -f $logfile

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

echo testing to make sure that an ole automation error right after
echo initialization does not cause p3icli to exit

p3icli    <<ALLDONE_1
kill ppt discard
ALLDONE_1

# try to open a template (via a path that does not exist..should not cause
# the program to exit).  If the bug exists, the 9-second sleep will never
# be executed by p3icli.
p3icli -l $logfile   <<ALLDONE_2
open template c:\path\to\junk.potx    # no such file
sleep 9000            # if this doesn't happen, p3icli died
kill ppt discard      # if this works, p3icli did not exit
halt

ALLDONE_2

diff -bu $testdata $logfile
if [ $? -ne 0 ] ; then
    echo "OLE err test failed!"
    exit 1
else
    rm -f $logfile
fi

echo "-------------------------"
echo "If PPT is still runnning, test failed.  Otherwise, passed."
echo "-------------------------"
exit 0
