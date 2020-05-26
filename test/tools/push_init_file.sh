#!/bin/bash

# Save away init file that might be in use by the current tester.
# The init file is presumed to live in $HOME/.p3iclirc and it's presumed
# that c:/temp exists .

init_file="$HOME/.p3iclirc"
storage_root="c:/temp"
storage_locn="$storage_root/saved_init_file"

if [ -z ${HOME+x} ]
then
    echo 'Whoa!' The '$'HOME env var is not defined.  The HOME folder is
    echo important for init file testing and is used by almost every p3icli
    echo test.
    echo
    echo You need to create the '$'HOME env var and try again.  Aborting.
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

if [ ! -f $init_file ] 
then
    echo No init file noted in the '$HOME' folder '('"$HOME"')' folder.
    echo Nothing to do '(this is not an error)'.
    exit 0
fi

if [ ! -d $storage_root ]
then
    echo 'Whoa!' The temp folder "$storage_root" must exist for virtually
    echo every p3icli test.
    echo
    echo You need to create "$storage_root" and try again.  Aborting.
    exit 1
fi

if [ ! -d $storage_locn ]
then
    mkdir $storage_locn
    if [ $? -ne 0 ] 
    then
        echo Unable to create saved init file folder '('"$storage_locn"')'.
        echo Aborting.
        exit 1
    fi
fi

mv $init_file ${storage_locn}/.
if [ $? -ne 0 ] 
then
    echo Unable to move "$init_file" to "${storage_locn}/."
    echo 'Init file push failed!'
    exit 1
fi
echo pushed "$init_file" to "${storage_locn}/."
exit 0
