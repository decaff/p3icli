#!/bin/bash

# Run whatever actions are necessary to cleanup from runing all tests.

tools/rmtestfiles.sh

tools/pop_init_file.sh
if [ $? -ne 0 ] ; then 
    echo "Ooops...could not restore init file."
    exit 1
fi

echo
echo =====================
echo All done cleaning up'!'
echo =====================
exit 0
