#!/bin/bash

# Restore the init file that might be in use by the current tester.
# It's presumed that the tester's init file should be returned to
# $HOME/.p3iclirc

storage_root="c:/temp"
storage_locn="$storage_root/saved_init_file"
stored_init_file="$storage_locn/.p3iclirc"

if [ ! -f $stored_init_file ]
then
    echo No stored init file noted in folder "$storage_locn"
    echo Nothing to do '(this is not an error)'.
    exit 0
fi

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

mv $stored_init_file ${HOME}/.
if [ $? -ne 0 ]
then
    echo Unable to move "$stored_init_file" to "${HOME}/."
    echo 'Init file push failed!'
    exit 1
fi
echo popped "$stored_init_file" to "${HOME}/."
exit 0
