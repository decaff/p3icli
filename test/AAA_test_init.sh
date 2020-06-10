#!/bin/bash

# Run whatever prep/checks the tests need from this script.

tools/copy_required_pics_to_temp.sh
if [ $? -ne 0 ] ; then
    echo "Test init failed.  Investigate and fix."
    exit 1
fi

tools/push_init_file.sh
if [ $? -ne 0 ] ; then
    echo "Test init failed.  Investigate and fix."
    exit 1
fi

tools/delete_init_file.sh
if [ $? -ne 0 ] ; then
    echo "Test init failed.  Investigate and fix."
    exit 1
fi


echo
echo ==============================
echo Good to go for p3icli testing'!'
echo ==============================
exit 0
