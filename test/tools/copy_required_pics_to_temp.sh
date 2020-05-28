#!/bin/bash

# Various pics are required to be in c:/temp when tests run. These pics
# are never removed once copied to temp.

storage_root="c:/temp"
pics_locn="./pics/pics_that_must_be_copied_to_temp/"

if [ ! -d $storage_root ]
then
    echo 'Whoa!' The temp folder "$storage_root" must exist for virtually
    echo every p3icli test.
    echo
    echo You need to create "$storage_root" and try again.  Aborting.
    exit 1
fi

if [ ! -d $pics_locn ]
then
    echo 'Whoa!'  Cannot locate folder "$pics_locn"
    echo Aborting.
    exit 1
fi


# copy everthing
cp -v ./pics/pics_that_must_be_copied_to_temp/* $storage_root
if [ $? -eq 0 ] ; then
    echo
    echo Required pics copied to "$storage_root"
    echo
else
    echo Something failed during cp operation.
    exit 1
fi

# kill this crap
rm -f ${storage_root}/Thumbs.db
exit 0
