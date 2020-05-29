#!/bin/bash
#
# Exercise significant changes in v3.0, namely:
#
#     - kill command resource cleanup
#     - limited retry loops when making/killing PPT connection
#     - strategic sleeps after slide paste (both failure case and succcess
#       case)
#     - sleep at exit forced by -T or -X switch
#     - addition of the P3ICLI_ASYNC_WAIT env var
#     - addition of the P3ICLI_EXIT_WAIT env var
#
# This is a self-checking test.
#
logfile="c:/temp/v30_log.txt"
logfile_edited="c:/temp/v30_log_edited.txt"
logfile_1a="c:/temp/v30_log_1a.txt"
logfile_1b="c:/temp/v30_log_1b.txt"
logfile_1c="c:/temp/v30_log_1c.txt"
logfile_1d="c:/temp/v30_log_1d.txt"

testdata_1a="test_data_files/v30_delay_log_1a.txt"
testdata_1b="test_data_files/v30_delay_log_1b.txt"
testdata_1c="test_data_files/v30_delay_log_1c.txt"
testdata_1d="test_data_files/v30_delay_log_1d.txt"
testdata_2a="test_data_files/v30_delay_log_2a.txt"
testdata_2b="test_data_files/v30_delay_log_2b.txt"
testdata_3="test_data_files/v30_delay_log3.txt"
testdata_4="test_data_files/v30_delay_log4.txt"

script_fast="test_data_files/v30_fast_script.txt"
script_kill_test="test_data_files/v30_kill_test_script.txt"

rm -f $logfile $logfile_edited $logfile_1a $logfile_1b $logfile_1c $logfile_1d

if [ -f $logfile ] ; then
    echo cannot remove $logfile, failed "(exiting)"
    exit 1
fi
if [ -f $logfile_edited ] ; then
    echo cannot remove $logfile_edited, failed "(exiting)"
    exit 1
fi
if [ -f $logfile_1a ] ; then
    echo cannot remove $logfile_1a, failed "(exiting)"
    exit 1
fi
if [ -f $logfile_1b ] ; then
    echo cannot remove $logfile_1b, failed "(exiting)"
    exit 1
fi
if [ -f $logfile_1c ] ; then
    echo cannot remove $logfile_1c, failed "(exiting)"
    exit 1
fi
if [ -f $logfile_1d ] ; then
    echo cannot remove $logfile_1d, failed "(exiting)"
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

echo "pics root ${p3icli_root_dos_echo}\test"      >  $HOME/.p3iclirc
echo "templates root ${p3icli_root_dos_echo}\test" >> $HOME/.p3iclirc
# --------------------------------------------------------------------------

#
# 1 -- Implicitly test limited retry loops (which should only trigger on a
#      fast PC host with PPT 2016 installed).
#
# Note that after all of the dust settled with v3.0 changes...the limited
# retry loops never actually triggered.  Doesn't hurt to put p3icli thru
# the wringer...interesting "things" might show up some day on a really,
# really fast host.

p3icli -D5 -l $logfile_1a $script_fast
p3icli -D5 -l $logfile_1b $script_fast
p3icli -D5 -l $logfile_1c $script_kill_test
p3icli -D5 -l $logfile_1d $script_kill_test \
                          $script_fast $script_fast $script_fast

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile_1a $logfile_1b $logfile_1c $logfile_1d
    exit 1
fi

# strip out nonportable, path-specific data from log file...
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    -e "s/\(debug: opening init file: \).*\(\.p3iclirc.*\)/\1\2/"        \
    $logfile_1a > $logfile_edited

diff -bu $testdata_1a $logfile_edited
if [ $? -ne 0 ] ; then
    tools/delete_init_file.sh     # clean up
    echo "v30 1a test failed!!"
    exit 1
fi

# strip out nonportable, path-specific data from log file...
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    -e "s/\(debug: opening init file: \).*\(\.p3iclirc.*\)/\1\2/"        \
    $logfile_1b > $logfile_edited

diff -bu $testdata_1b $logfile_edited
if [ $? -ne 0 ] ; then
    echo "v30 1b test failed!!"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

# strip out nonportable, path-specific data from log file...
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    -e "s/\(debug: opening init file: \).*\(\.p3iclirc.*\)/\1\2/"        \
    $logfile_1c > $logfile_edited

diff -bu $testdata_1c $logfile_edited
if [ $? -ne 0 ] ; then
    echo "v30 1c test failed!!"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

# strip out nonportable, path-specific data from log file...
sed -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    -e "s/\(debug: opening init file: \).*\(\.p3iclirc.*\)/\1\2/"        \
    $logfile_1d > $logfile_edited

diff -bu $testdata_1d $logfile_edited
if [ $? -ne 0 ] ; then
    echo "v30 1d test failed!!"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

#
# 2a -- cmdline switch testing
#
# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT
# first...the defaults
p3icli -D                  > $logfile 2>& 1 <<DONE_2A_1
DONE_2A_1

# now some non-defaults
p3icli -D -Wa:555 -Wx:333 >> $logfile 2>& 1 <<DONE_2A_2
DONE_2A_2

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

# singletons
p3icli -D -Wa:666         >> $logfile 2>& 1 <<DONE_2A_3
DONE_2A_3
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

p3icli -D -Wx:47          >> $logfile 2>& 1 <<DONE_2A_4
DONE_2A_4
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

# some errors
p3icli -D -Wx:            >> $logfile 2>& 1 <<DONE_2A_5a
DONE_2A_5a
p3icli -D -Wa             >> $logfile 2>& 1 <<DONE_2A_5b
DONE_2A_5b
p3icli -D -Wx:16000  -Wa:16001       >> $logfile 2>& 1 <<DONE_2A_6
DONE_2A_6
p3icli -D -Wa:0  -Wx:-1   >> $logfile 2>& 1 <<DONE_2A_7
DONE_2A_7
p3icli -D -W              >> $logfile 2>& 1 <<DONE_2A_8
DONE_2A_8
p3icli -D -Wg:300         >> $logfile 2>& 1 <<DONE_2A_9
DONE_2A_9
p3icli -D -Wa:7your       >> $logfile 2>& 1 <<DONE_2A_10
DONE_2A_10
p3icli -D -Wa:mom8        >> $logfile 2>& 1 <<DONE_2A_11
DONE_2A_11

diff -bu $testdata_2a $logfile
if [ $? -ne 0 ] ; then
    echo "v30 test 2a failed!!"
    tools/delete_init_file.sh     # clean up
    exit 1
fi


#
# 2b -- P3ICLI_ASYNC_WAIT env var testing
#
# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT

P3ICLI_ASYNC_WAIT=129
export P3ICLI_ASYNC_WAIT
p3icli -l $logfile -D <<DONE_2B_1
    sleep 88
    kill ppt discard
    start ppt
DONE_2B_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

P3ICLI_ASYNC_WAIT=""
p3icli -D >> $logfile 2>& 1 <<DONE_2B_2
    kill ppt discard
DONE_2B_2
P3ICLI_ASYNC_WAIT=" "
p3icli -D >> $logfile 2>& 1 <<DONE_2B_3
DONE_2B_3
P3ICLI_ASYNC_WAIT="    75"
p3icli -D >> $logfile 2>& 1 <<DONE_2B_4
DONE_2B_4
P3ICLI_ASYNC_WAIT="  75 up yours"
p3icli -D >> $logfile 2>& 1 <<DONE_2B_6
DONE_2B_6
P3ICLI_ASYNC_WAIT="  0     "
p3icli -D >> $logfile 2>& 1 <<DONE_2B_7
DONE_2B_7
P3ICLI_ASYNC_WAIT="  16000     "
p3icli -D >> $logfile 2>& 1 <<DONE_2B_8
DONE_2B_8
P3ICLI_ASYNC_WAIT="9999999999999999999999999"
p3icli -D >> $logfile 2>& 1 <<DONE_2B_9
DONE_2B_9

#
# 2c -- P3ICLI_EXIT_WAIT env var testing
#
unset P3ICLI_ASYNC_WAIT
P3ICLI_EXIT_WAIT=381
export P3ICLI_EXIT_WAIT

p3icli -D >> $logfile 2>& 1 <<DONE_2c_1
    sleep 88
    kill ppt discard
    start ppt
    kill ppt discard
DONE_2c_1

if [ $? -ne 0 ] ; then
    tools/delete_init_file.sh     # clean up
    echo "unexpected non-zero status...test failed"
    cat $logfile
    exit 1
fi

P3ICLI_EXIT_WAIT="   16001"
p3icli -D >> $logfile 2>& 1 <<DONE_2C_2
DONE_2C_2
P3ICLI_EXIT_WAIT=" -2"
p3icli -D >> $logfile 2>& 1 <<DONE_2C_3
DONE_2C_3

#
# 2d -- both env vars
#
P3ICLI_ASYNC_WAIT=77
export P3ICLI_ASYNC_WAIT
P3ICLI_EXIT_WAIT=55
p3icli -D >> $logfile 2>& 1 <<DONE_2D_1
DONE_2D_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

#
# 2e -- cmdline overrides env vars
#

p3icli -D -Wa:308         >> $logfile 2>& 1 <<DONE_2E_1
kill ppt discard
DONE_2E_1

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

p3icli -D -Wx:255         >> $logfile 2>& 1 <<DONE_2E_2
kill ppt discard
DONE_2E_2
p3icli -D -Wa:291 -Wx:255 >> $logfile 2>& 1 <<DONE_2E_3
kill ppt discard
DONE_2E_3
p3icli -D                 >> $logfile 2>& 1 <<DONE_2E_4
kill ppt discard
DONE_2E_4

diff -bu $testdata_2b $logfile
if [ $? -ne 0 ] ; then
    tools/delete_init_file.sh     # clean up
    echo "v30 test 2b-2e failed!!"
    exit 1
fi

# cleanup -- kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT


#
# 3 -- go nutty with the reworked kill ppt command
#

p3icli -l $logfile -D <<DONE_T3
    kill ppt discard
    start ppt
    kill ppt discard
    kill ppt save
    kill ppt save
    kill ppt discard
    kill ppt save
DONE_T3

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...3rd test failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

diff -bu $testdata_3 $logfile
if [ $? -ne 0 ] ; then
    tools/delete_init_file.sh     # clean up
    echo "3rd v30 test failed!!"
    exit 1
fi

#
# 4 -- With env vars dead, look for a retry...only relevant on a fast
#      PC with PPT2016 installed.
#

p3icli -l $logfile -D5 -T 1300 ts_scripts/task_sched_cpy_fmt.txt

if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test 4 failed"
    tools/delete_init_file.sh     # clean up
    cat $logfile
    exit 1
fi

# time to test the output of the log file, after removing time and file path
# dependent data that will not diff correctly.
sed -e 's/\.[0-9][0-9][0-9]/\.XXX/'   \
    -e 's/\[[0-9][0-9]/[XX/'      \
    -e 's/\/[0-9][0-9]/\/XX/'     \
    -e 's/ [0-9][0-9]:[0-9][0-9]:[0-9][0-9]/ XX:XX:XX/'  \
    -e "s/\(Expanded path: \)${p3icli_root_dos_subst}\(.*$\)/\1..\2/" \
    -e "s/\(debug: opening init file: \).*\(\.p3iclirc.*\)/\1\2/"     \
                                         $logfile > $logfile_edited


diff -bu $testdata_4 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "4th v30 test failed!!"
    tools/delete_init_file.sh     # clean up
    exit 1
fi

tools/delete_init_file.sh     # clean up
echo test passed
exit 0
