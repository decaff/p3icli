#!/bin/bash
#
# Exercise cmdline changes in v3.2, namely:
#
#   p3icli -Iev
#   p3icli -Iif
#
# This is a self-checking test.
#
logfile1="c:/temp/v34_cmdline_log1.txt"
logfile2="c:/temp/v34_cmdline_log2.txt"
logfile_edited="c:/temp/v34_log_edited.txt"
testdata_T_switch="test_data_files/v34_cmdline_log_T.txt"
testdata1="test_data_files/v34_cmdline_log1.txt"
testdata2="test_data_files/v34_cmdline_log2.txt"
testdata3="test_data_files/v34_cmdline_log3.txt"
testdata4="test_data_files/v34_cmdline_log4.txt"
testdata5="test_data_files/v34_cmdline_log5.txt"
script="test_data_files/v34_cmdline_script.txt"
script_T_switch="test_data_files/v34_cmdline_script_T.txt"

rm -f $logfile1 $logfile2 $logfile_edited

if [ -f $logfile1 ] ; then
    echo cannot remove $logfile1, failed "(exiting)"
    exit 1
fi
if [ -f $logfile2 ] ; then
    echo cannot remove $logfile2, failed "(exiting)"
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
p3icli -X <<ALLDONE_1
    exit
ALLDONE_1
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...'exit' #1 cmd test failed"
    exit 1
fi

while false; do

# ----------------------- test #1a: -Iev -------------------------

# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT

P3ICLI_ASYNC_WAIT=221
export P3ICLI_ASYNC_WAIT

p3icli  -Iev -D -l $logfile1 $script
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #1a failed!!"
    cat $logfile1
    exit 1
fi

diff -bu $testdata1 $logfile1
if [ $? -ne 0 ] ; then
    echo "test #1a failed!!"
    exit 1
else
    echo "test #1a passed"
    rm -f $logfile1
fi

# ----------------------- test #1b: -Iev -------------------------

# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT

P3ICLI_EXIT_WAIT=119
export P3ICLI_EXIT_WAIT

p3icli          -l $logfile1 -D -Iev $script 
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #1b failed!!"
    cat $logfile1
    exit 1
fi

diff -bu $testdata1 $logfile1
if [ $? -ne 0 ] ; then
    echo "test #1b failed!!"
    exit 1
else
    echo "test #1b passed"
    rm -f $logfile1
fi

# ----------------------- test #1c: -Iev -------------------------

# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT

P3ICLI_ASYNC_WAIT=401
export P3ICLI_ASYNC_WAIT

P3ICLI_EXIT_WAIT=191
export P3ICLI_EXIT_WAIT

p3icli  -Ix -l $logfile1 -Iev -D $script
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #1c failed!!"
    cat $logfile1
    exit 1
fi

diff -bu $testdata1 $logfile1
if [ $? -ne 0 ] ; then
    echo "test #1c failed!!"
    exit 1
else
    echo "test #1c passed"
    rm -f $logfile1
fi

rm -f $logfile1

# ----------------------- test #1d: -Iev -------------------------

# kill env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT

P3ICLI_ASYNC_WAIT=201
export P3ICLI_ASYNC_WAIT

P3ICLI_EXIT_WAIT=300
export P3ICLI_EXIT_WAIT

# vary cmdline parsing by adding -T switch
echo "cmdline switch '-T 9000' in effect..."

p3icli  -Ix -l $logfile1 -T 9000 -Iev -D $script_T_switch
if [ $? -ne 0 ] ; then
    echo "unexpected non-zero status...test #1d failed!!"
    cat $logfile1
    exit 1
fi

# test the output of the log file, after removing time-dependent data that
# $will not diff correctly.
sed -e 's/\.[0-9][0-9][0-9]/\.XXX/'                      \
    -e 's/\[[0-9][0-9]/[XX/'                             \
    -e 's/\/[0-9][0-9]/\/XX/'                            \
    -e 's/ [0-9][0-9]:[0-9][0-9]:[0-9][0-9]/ XX:XX:XX/'  \
                                         $logfile1 > $logfile_edited

diff -bu $testdata_T_switch $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #1d failed!!"
    exit 1
else
    echo "test #1d passed"
    rm -f $logfile1
fi

rm -f $logfile1 $logfile_edited

done

# ----------------------- setup for -Iif -------------------------

# kill P3ICLI env vars...
unset P3ICLI_ASYNC_WAIT
unset P3ICLI_EXIT_WAIT

if [ -z ${HOME+x} ]
then
    echo 'Whoa!' The '$'HOME env var is not defined.  The HOME folder is
    echo important for init file testing and is used by almost every p3icli
    echo test.
    echo
    echo You need to create '$'HOME and try again.  Aborting.
    exit 1
fi

if [ -z ${USERPROFILE+x} ]
then
    echo 'Whoa!' The '$'USERPROFILE env var is not defined.  The USERPROFILE
    echo env var is echo important for init file testing and could be used
    echo by almost any p3icli user.  This variable should have been defined
    echo automagically by Windows.
    echo
    echo You need to create '$'USERPROFILE and/or investigate your Windows
    echo config and try again.  Aborting.
    exit 1
fi

# ----------------------- test #2a: -Iif -------------------------
# -------------------- using $HOME/.p3iclirc ---------------------

tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish test #2a initial conditions, aborting.'
    exit 1
fi

# need to create $HOME/.p3iclirc with a syntax error
echo "i am a syntax error"        > $HOME/.p3iclirc

p3icli -Iif -D -l $logfile2 $script
if [ $? -ne 0 ] ; then
    echo "test #2a failed!!"
    cat $logfile2
    exit 1
fi

diff -bu $testdata2 $logfile2
if [ $? -ne 0 ] ; then
    echo "test #2a failed!!"
    exit 1
fi
echo "test #2a passed"

rm -f $logfile2

# ----------------------- test #2b: no -Iif -------------------------
# ---------------------- using $HOME/.p3iclirc ----------------------

# $HOME/.p3iclirc still exists and includes a syntax error

p3icli -D -l $logfile2 $script

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data from .p3iclirc (the init file
# that p3icli _should_ open) from the collected log file...
#
# Sed expression filters out path data in a syntax error message.
sed -e "s/^\(p3icli: \).*\(\.p3iclirc(line .*\)/\1\2/"   \
    $logfile2 > $logfile_edited

diff -bu $testdata3 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #2b failed!!"
    exit 1
fi
echo "test #2b passed"

rm -f $logfile2 $logfile_edited

# ----------------------- test #2c: -Iif -------------------------
# -------------------- using $HOME/_p3iclirc ---------------------

tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish test #2c initial conditions, aborting.'
    exit 1
fi

# need to create $HOME/_p3iclirc with a syntax error
echo "# beginning of init file"        >  $HOME/_p3iclirc
echo "# ----------------------"        >> $HOME/_p3iclirc
echo " "                               >> $HOME/_p3iclirc
echo "junk right here"                 >> $HOME/_p3iclirc

p3icli -Iif -D -l $logfile2 -Iev $script
if [ $? -ne 0 ] ; then
    echo "test #2c failed!!"
    cat $logfile2
    exit 1
fi

diff -bu $testdata2 $logfile2
if [ $? -ne 0 ] ; then
    echo "test #2c failed!!"
    exit 1
fi
echo "test #2c passed"

rm -f $logfile2

# ----------------------- test #2d: no -Iif -------------------------
# ---------------------- using $HOME/_p3iclirc ----------------------

# $HOME/_p3iclirc still exists and includes a syntax error

p3icli -D -l $logfile2 $script

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data from _p3iclirc (the init file
# that p3icli _should_ open) from the collected log file...
#
# Sed expression filters out path data in a syntax error message.
sed -e "s/^\(p3icli: \).*\(_p3iclirc(line .*\)/\1\2/"   \
    $logfile2 > $logfile_edited

diff -bu $testdata4 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #2d failed!!"
    exit 1
fi
echo "test #2d passed"

rm -f $logfile2 $logfile_edited

# ----------------------- test #2e: -Iif -------------------------
# ------------ using $USERPROFILE/p3icli_init.txt ----------------

tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo 'cannot establish test #2e initial conditions, aborting.'
    exit 1
fi

# need to create $USERPROFILE/p3icli_init.txt with a syntax error
echo "#"                               >  $USERPROFILE/p3icli_init.txt
echo "# ----------------------"        >> $USERPROFILE/p3icli_init.txt
echo "# beginning of init file"        >> $USERPROFILE/p3icli_init.txt
echo "# ----------------------"        >> $USERPROFILE/p3icli_init.txt
echo "#"                               >> $USERPROFILE/p3icli_init.txt
echo "#"                               >> $USERPROFILE/p3icli_init.txt
echo "   YOLO        "                 >> $USERPROFILE/p3icli_init.txt
echo "#"                               >> $USERPROFILE/p3icli_init.txt
echo "sleep 20"                        >> $USERPROFILE/p3icli_init.txt

p3icli   -Iif -D -Iev -l $logfile2 $script
if [ $? -ne 0 ] ; then
    echo "test #2e failed!!"
    cat $logfile2
    exit 1
fi

diff -bu $testdata2 $logfile2
if [ $? -ne 0 ] ; then
    echo "test #2e failed!!"
    exit 1
fi
echo "test #2e passed"

rm -f $logfile2

# ---------------------- test #2e: no -Iif -----------------------
# ------------ using $USERPROFILE/p3icli_init.txt ----------------

# $USERPROFILE/p3icli_init.txt still exists and includes a syntax error

p3icli -D -l $logfile2 $script

tools/delete_init_file.sh     # clean up

# Strip out nonportable, path-specific data from p3icli_init.txt (the init file
# that p3icli _should_ open) from the collected log file...
#
# Sed expression filters out path data in a syntax error message.
sed -e "s/^\(p3icli: \).*\(p3icli_init.txt(line .*\)/\1\2/"   \
    $logfile2 > $logfile_edited

diff -bu $testdata5 $logfile_edited
if [ $? -ne 0 ] ; then
    echo "test #2f failed!!"
    exit 1
fi
echo "test #2f passed"

rm -f $logfile2 $logfile_edited

exit 0
