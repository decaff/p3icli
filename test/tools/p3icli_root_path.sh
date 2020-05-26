#!/bin/bash

# There are 4 env vars in this file that must be updated.  Don't skip any
# of them or various "diff" tests will fail (at a minimum).  This file will
# be sourced by test scripts.

# Do _not_ end any path with a slash ( '/' or '\' ).

# Declare the path to the p3icli development root folder on the current
# host PC.
p3icli_root_unix="c:/ghub/p3icli"

# -----------------------------------------------------------------------
# back slashes don't mix well with cygwin or p3icli quoted strings (sigh)
# -----------------------------------------------------------------------

# Next defn is suitable for expansion with command line tools that
# simply write a string to the output stream. E.g., echo
p3icli_root_dos_echo='c:\ghub\p3icli'

# This defn is suitable for expansion with command line tools that
# substitute and expand a string in the output stream. E.g., sed
p3icli_root_dos_subst='c:\\ghub\\p3icli'

# This defn is suitable for expansion with command line tools that
# substitute and expand a string in the output stream that then winds
# up in a p3icli quoted string.
p3icli_root_dos_subst_x2='c:\\\\ghub\\\\p3icli'
