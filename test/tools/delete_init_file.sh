#!/bin/bash

# Nuke the p3icli init files stored in one of these 3 locations:
#
#     $HOME/.p3iclirc
#     $HOME/_p3iclirc
#     $USERPROFILE/p3icli_init.txt
#
# It's presumed that:
#
# a) the tester's personal init file lives in $HOME/.p3iclirc, and
# b) said file has been previously saved with the push_init_file.sh script .
#
# Given a) & b) above, nuking all init files is fair game.

init_file1="$HOME/.p3iclirc"
init_file2="$HOME/_p3iclirc"
init_file3="$USERPROFILE/p3icli_init.txt"

if [ -z ${HOME+x} ]
then
    echo 'Whoa!' The '$'HOME env var is not defined.  The HOME folder is
    echo important for init file testing and is used by almost every p3icli
    echo test.
    echo
    echo You need to create '$'HOME and try again.  Aborting.
    exit 1
fi

if [ ! -d $HOME ]
then
    echo 'Whoa!' The '$'HOME folder '('"$HOME"')' does not exist.
    echo This folder is important for init file testing and is used by
    echo almost every p3icli test.
    echo
    echo You need to ensure that the '$'HOME folder exists and is writable.
    echo Aborting.
    exit 1
fi

if [ -f $init_file1 ]
then
    rm -f $init_file1
    if [ -f $init_file1 ]
    then
        echo rm failed to remove init file "$init_file1" .  Aborting.
        exit 1
    fi
fi

if [ -f $init_file2 ]
then
    rm -f $init_file2
    if [ -f $init_file2 ]
    then
        echo rm failed to remove init file "$init_file2" .  Aborting.
        exit 1
    fi
fi

if [ -f $init_file3 ]
then
    rm -f $init_file3
    if [ -f $init_file3 ]
    then
        echo rm failed to remove init file "$init_file3" .  Aborting.
        exit 1
    fi
fi

#exit quietly...no news is good news
exit 0
