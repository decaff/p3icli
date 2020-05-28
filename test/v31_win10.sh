#!/bin/bash
#
# Exercise Windows Explorer features in v3.1 (for Win10 hosts or later,
# only).  Features:
#
#     - new command line switches (-Ix and -Ex)
#     - killing windows explorer if copy src fmt on
#     - warning about windows explorer if copy src fmt on
#     - addition of the P3ICLI_WDWS_XPLR_END_TASK env var
#     - addition of the P3ICLI_WDWS_XPLR_IGNORE env var
#
# This is a self-checking test.
#

# is this a Win10 host?
win10=`uname | awk '{ split($0, a, "-") ; print (a[2] >= 10) ? "t" : "f"; }'`
if [ $win10 != "t" ] ; then
    echo "this test suite only meaningful for a win10 (or later) host"
    exit 1
fi

logfile="c:/temp/v31_win10_log.txt"

testdata_1="test_data_files/v31_win10_log_1.txt"
testdata_2a="test_data_files/v31_win10_log_2a.txt"
testdata_2b="test_data_files/v31_win10_log_2b.txt"
testdata_2c="test_data_files/v31_win10_log_2c.txt"
testdata_3="test_data_files/v31_win10_log_3.txt"


rm -f $logfile

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi

# kill all instances of ppt
p3icli -X <<ALLDONE
    exit
ALLDONE



#
# 1 -- cmdline switch testing
#
# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT
unset P3ICLI_WDWS_XPLR_END_TASK
unset P3ICLI_WDWS_XPLR_IGNORE
# first...the defaults
p3icli -D1                 > $logfile 2>& 1 <<DONE_1_1
DONE_1_1

# now some non-defaults
p3icli -D1 -Ex >> $logfile 2>& 1 <<DONE_1_2
DONE_1_2

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

p3icli -D1 -Ix >> $logfile 2>& 1 <<DONE_1_3
DONE_1_3

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

p3icli -D1 -Ex -Ix >> $logfile 2>& 1 <<DONE_1_4
DONE_1_4

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

# some errors
p3icli -D1 -Ix:            >> $logfile 2>& 1 <<DONE_1_5
DONE_1_5
p3icli -D1 -I              >> $logfile 2>& 1 <<DONE_1_6
DONE_1_6
p3icli -D1 -Exm            >> $logfile 2>& 1 <<DONE_1_7
DONE_1_7
p3icli -D1 -E              >> $logfile 2>& 1 <<DONE_1_8
DONE_1_8

diff -bu $testdata_1 $logfile
if [ $? -ne 0 ] ; then
    echo "v31 test 1 failed!!"
    exit 1
fi


#
# 2a -- P3ICLI_WDWS_XPLR_END_TASK env var testing
#
# kill env vars...
unset P3ICLI_WDWS_XPLR_END_TASK
unset P3ICLI_WDWS_XPLR_IGNORE

P3ICLI_WDWS_XPLR_END_TASK="T"
export P3ICLI_WDWS_XPLR_END_TASK
p3icli -l $logfile -D1 <<DONE_2A_1
DONE_2A_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

P3ICLI_WDWS_XPLR_END_TASK=""
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_2
DONE_2A_2
P3ICLI_WDWS_XPLR_END_TASK=" "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_3
DONE_2A_3
P3ICLI_WDWS_XPLR_END_TASK="    True"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_4
DONE_2A_4
P3ICLI_WDWS_XPLR_END_TASK="  True that "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_6
DONE_2A_6
P3ICLI_WDWS_XPLR_END_TASK="  false     "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_7
DONE_2A_7
P3ICLI_WDWS_XPLR_END_TASK="TRUE"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_8
DONE_2A_8
P3ICLI_WDWS_XPLR_END_TASK="  FaLsE     "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_9
DONE_2A_9
P3ICLI_WDWS_XPLR_END_TASK="T              "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_10
DONE_2A_10
P3ICLI_WDWS_XPLR_END_TASK="f"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_11
DONE_2A_11
P3ICLI_WDWS_XPLR_END_TASK=" f for now              "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_12
DONE_2A_12
P3ICLI_WDWS_XPLR_END_TASK="true"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_13
DONE_2A_13
P3ICLI_WDWS_XPLR_END_TASK="F"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_14
DONE_2A_14
P3ICLI_WDWS_XPLR_END_TASK="     t"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_15
DONE_2A_15
P3ICLI_WDWS_XPLR_END_TASK="FALSE"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_16
DONE_2A_16
P3ICLI_WDWS_XPLR_END_TASK="t"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2A_17
DONE_2A_17

diff -bu $testdata_2a $logfile
if [ $? -ne 0 ] ; then
    echo "v31 test 2a failed!!"
    exit 1
fi


#
# 2b -- P3ICLI_WDWS_XPLR_IGNORE env var testing
#
unset P3ICLI_WDWS_XPLR_END_TASK

#
P3ICLI_WDWS_XPLR_IGNORE="t"
export P3ICLI_WDWS_XPLR_IGNORE

p3icli -D1 -l $logfile <<DONE_2B_1
    quit
DONE_2B_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

P3ICLI_WDWS_XPLR_IGNORE="   f  "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_2
DONE_2B_2
P3ICLI_WDWS_XPLR_IGNORE=" true "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_3
DONE_2B_3
P3ICLI_WDWS_XPLR_IGNORE="FALSE"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_4
DONE_2B_4
P3ICLI_WDWS_XPLR_IGNORE="t f   fin"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_5
DONE_2B_5
P3ICLI_WDWS_XPLR_IGNORE=" T"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_6
DONE_2B_6
P3ICLI_WDWS_XPLR_IGNORE="F "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_7
DONE_2B_7
P3ICLI_WDWS_XPLR_IGNORE=" TRUE                     "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2B_8
DONE_2B_8

diff -bu $testdata_2b $logfile
if [ $? -ne 0 ] ; then
    echo "v31 test 2b failed!!"
    exit 1
fi


#
# 2c -- both env vars
#
P3ICLI_WDWS_XPLR_END_TASK="T"
export P3ICLI_WDWS_XPLR_END_TASK
P3ICLI_WDWS_XPLR_IGNORE="T"
p3icli -D1 -l $logfile <<DONE_2C_1
DONE_2C_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

P3ICLI_WDWS_XPLR_END_TASK="F"
P3ICLI_WDWS_XPLR_IGNORE="F"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2C_2
DONE_2C_2

P3ICLI_WDWS_XPLR_END_TASK="tRue"
P3ICLI_WDWS_XPLR_IGNORE="False"
p3icli -D1 >> $logfile 2>& 1 <<DONE_2C_3
DONE_2C_3

P3ICLI_WDWS_XPLR_END_TASK="         f         "
P3ICLI_WDWS_XPLR_IGNORE=" true "
p3icli -D1 >> $logfile 2>& 1 <<DONE_2C_4
DONE_2C_4

#
# 2c (cont) -- cmdline overrides env vars (use same log file)
#
P3ICLI_WDWS_XPLR_END_TASK="F"
P3ICLI_WDWS_XPLR_IGNORE="F"
p3icli -D1               >> $logfile 2>& 1 <<DONE_2C_5
DONE_2C_5

p3icli -D1 -Ix -Ex       >> $logfile 2>& 1 <<DONE_2C_6
DONE_2C_6

p3icli -D1 -Ix           >> $logfile 2>& 1 <<DONE_2C_7
DONE_2C_7

p3icli -D1 -Ex           >> $logfile 2>& 1 <<DONE_2C_8
DONE_2C_8

diff -bu $testdata_2c $logfile
if [ $? -ne 0 ] ; then
    echo "v31 test 2c failed!!"
    exit 1
fi

# cleanup -- kill env vars...
unset P3ICLI_WDWS_XPLR_END_TASK
unset P3ICLI_WDWS_XPLR_IGNORE


#
# 3 -- test that a warning is emitted if Windows Explorer is running
#      (default config) and that the warning can be suppressed.  Then test
#      that the -Ex switch kills all visible instances of windows explorer.
#

cmd /c "start explorer.exe"
sleep 1
p3icli -l $logfile <<DONE_T3
    copy src fmt on
    copy src fmt off
    copy src fmt on     # only one warning, ever
    copy src fmt on     # only one warning, ever
    copy src fmt on     # only one warning, ever
    copy src fmt off
    copy src fmt on     # only one warning, ever
DONE_T3

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...3rd test failed"
    cat $logfile
    exit 1
fi

# suppress the Wdws Explr warning, even when -Ex is set
echo "#begin no wdws explr warning test, pt1" >> $logfile
p3icli -Ix -Ex                >> $logfile 2>& 1 <<DONE_T4
    copy src fmt on
DONE_T4
echo "#end no wdws explr warning test, pt1"   >> $logfile

# suppress the Wdws Explr warning, when only -Ix is set
echo "#begin no wdws explr warning test, pt2" >> $logfile
p3icli -Ix                    >> $logfile 2>& 1 <<DONE_T5
    copy src fmt on
DONE_T5
echo "#end no wdws explr warning test, pt2"   >> $logfile

echo "Killing all visible instances of Windows Explorer..."
sleep 1

# make all instances of explorer go away
p3icli -Ex     >> $logfile 2>& 1 <<DONE_T6
    copy src fmt on
DONE_T6

read -n1 -r -p \
   "If Windows Explorer is visible, test failed (any key to continue)." key

# make 2 instances go away

echo "Killing 2 instances of Windows Explorer..."
sleep 1
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
sleep 2

p3icli -Ex     >> $logfile 2>& 1 <<DONE_T7
    copy src fmt on
DONE_T7

read -n1 -r -p \
   "If Windows Explorer is visible, test failed (any key to continue)." key

# make 7 instances go away

echo "Killing 7 instances of Windows Explorer..."
sleep 1
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
cmd /c "start explorer.exe"
sleep 5      # let them get started and processing message queue(s)

P3ICLI_WDWS_XPLR_END_TASK="true"
export P3ICLI_WDWS_XPLR_END_TASK
p3icli         >> $logfile 2>& 1 <<DONE_T7
    copy src fmt on
DONE_T7

read -n1 -r -p \
   "If Windows Explorer is visible, test failed (any key to continue)." key


diff -bu $testdata_3 $logfile
if [ $? -ne 0 ] ; then
    echo "3rd v31 test failed!!"
    exit 1
fi

echo test passed
