#!/bin/bash

# script takes three arguments:
#
# $1:  <directory path> where test files are to be copied/deleted
# $2:  { cp | rm } -> either cp files into $1, or rm files from $1
# $3:  optional <text file path> containing list of files to copy.
#      The last argument is optional if $2 is "rm" .

if [ "$#" -lt 2 -o "$#" -gt 3 ] ; then
    echo "usage: $0 "  '<target_dir_path> {cp | rm} [<file_of_file_paths>]'
    exit 1
fi

if [ ! '(' "$2" = "cp" -o "$2" = "rm" ')' ] ; then
    echo "usage: $0 "  '<target_dir_path> {cp | rm} [<file_of_file_paths>]'
    exit 1
fi

if [ ! -d "$1" ] ; then
    echo  \'"$1"\' either does not exist or is not a 'directory!'
    exit 1
fi

if [ "$2" = "cp" ] ; then
    if [ "$#" -ne 3 ] ; then
        echo "usage: $0 "  '<target_dir_path> cp <file_of_file_paths>'
        exit 1
    fi
    if [ ! -f "$3" ] ; then
        echo  \'"$3"\' either does not exist or is not a regular 'file!'
        exit 1
    fi
    while read -r fname ; do
        if [ -n "${fname// /}" ] ; then
            cp "$fname" "$1"/.
            if [ $? -ne 0 ] ; then
                echo cp \'"$fname"\' to \'"$1"\' 'failed!'
                exit 1
            fi
        fi
    done < "$3"
else
    # if cwd is empty, do nothing (and don't complain) -- makes this script
    # re-entrant.
    OIFS="$IFS"
    IFS=$'\n'        # newline is shell word split separator
    flist="$(ls -A1 "$1")"
    if [ -n "$flist" ]; then
        # must worry about spaces in filenames...sigh
        for i in $flist
        do
            rm "$1"/"$i"
            if [ $? -ne 0 ] ; then
                echo rm \'"$i"\' 'failed!'
                exit 1
            fi
        done
        # now ensure directory is empty!
        if [ -n "$(ls -A "$1")" ]; then
            echo "Oops! $1 is NOT empty after rm.  Aborting..."
            exit 1
        fi
    fi
    IFS="$OIFS"
fi

# success
exit 0
