To run the tests in this folder, here are the minimum setup condions:

1) cygwin must be installed and \path\to\cygwin\bin must appear in your
   PATH env variable.  Note that it's not possible to compile p3icli
   w/o several cygwin tools, so this setup condition is implied.

2) bash or mintty (both cygwin tools) must be used as the running shell when
   the tests in this folder are launched.  All tests are driven by bash shell
   scripts (i.e., files that end in .sh).

3) The folder c:/temp must exist and be writable.  The temp folder is used
   extensively by the test scripts to store log files and other test
   artifacts.

4) A HOME environment variable must exist and point at a writable folder.
   This writable folder is used for both p3icli init file testing as well
   as creation of portable (i.e., non-hardwired) test file paths.

5) Edit the script tools/p3icli_root_path.sh and update the LOCAL root path
   (in 4 env var defns) where the p3icli source code and various other
   folders and files are stored.

6) After creating a new version of p3icli.exe, you must MANUALLY copy it
   into this folder (i.e., into the ./test folder).  All tests execute the copy
   of p3icli found in the current working directory.  If the new p3icli is
   _not_ copied to the ./test folder, then the tests utilize whatever program
   version can be found via the PATH.  In the latter case, the updated (new)
   version of p3icli will NOT be tested.  Big sad.

======================== Taking One Test for a Spin ========================

After meeting setup conditions 1-6 above, you are almost ready to run test(s).
To initialize the test environment, take these steps:

a) Start a bash or mintty shell and change directory to <rootdir>/p3icli/test
   (i.e., the directory where this readme is stored).

b) Run this shell script:  AAA_test_init.sh

   It will run a health check on setup steps 3-5 above and then copy
   required test scaffolding to c:/temp .

c) If PPT 2010 or earlier is installed on your PC, run this script:

       allsyntax_pre_ppt_2013.sh           (it's self-checking)

   Otherwise, run this script:

       allsyntax_post_ppt_2010.sh          (also self-checking)

   Note: Office 365 always includes the latest and greatest version of PPT,
   so it is definitely "post PPT 2010."

   This is a simple pass/fail test of the syntax supported by p3icli.  If the
   selected allsyntax test runs to completion with no errors, you can run any
   other test script in this directory that's applicable to your version of
   PPT.  Exception:  _don't_ run zzz_test_final_cleanup.sh until testing is
   complete (this is a cleanup shell script, not a test).

======================= Running the Rest of the Tests =====================

   To run the rest of the tests, simply type "ls" in <rootdir>/p3icli/test
   and run the tests in alphabetic order.  Browsing the shell script of the
   selected test before running it may show comments that describe what
   it does.

   Be aware that the test "file_errs.sh" includes a UNC test path that almost
   certainly must be changed for use in the current (i.e., your) network
   environment.  See the comments at the top of file_errs.sh for more details.

   Note that some tests in <rootdir>/p3icli/test are self-checking and return
   a simple pass/fail status--they require no human intervention.  Other
   tests require visual verification of data.  These latter tests can be
   tedious.

   It should be noted that a tester might spend multiple days slogging
   thru all the tests located in <rootdir>/p3icli/test .  There is no
   need to run AAA_test_init.sh each day when testing resumes.  This
   script is run _once_ only when a new version of p3icli is built and
   deemed a suitable release candidate.

   Finally, 3 test scripts in the ts_scripts subdirectory exercise p3icli under
   the Task Scheduler.  A readme file in that subdirectory explains how to run
   those tests as well.

   When you've run all the tests you plan to run, finish up by executing
   this shell script:   zzz_test_final_cleanup.sh  .

   It will clean up most of the test scaffolding installed in step b) above.

============================= Test Failure (uh oh) =========================

A test failed.  Now what?

Some common failure causes:

+ You ran a test that's not suitable for your version of PPT.  For example,
  if your version of PPT is a component of Office 365, don't run any test
  that's labeled pre_ppt_2013 .

+ You ran a test that enables copy src fmt and File Explorer (aka Windows
  Explorer) is running.  If the test is not prepared to deal with this issue
  (some tests are not), log file diff(s) will fail and look like so:

--- c:/temp/ansi_log.txt        2020-06-09 14:37:04.402218800 -0700
+++ test_data_files/ansi_log.txt        2016-12-24 00:46:14.924281900 -0800
@@ -1,10 +1 @@
 0
-p3icli: line 1: warning: Windows Explorer is running as a visible process.
-
-                 Explorer may cause PPT instability if a P3ICLI script uses
-                 the command "copy src fmt on" . Refer to the help topic
-                        "PowerPoint Instability On Windows 10"
-                 in the reference manual for further details.  Pay attention
-                 to the discussion of P3ICLI commandline switches that either
-                 suppress this warning or automatically kill Windows Explorer.
-
test failed!!

  The fix is simple:  close File Explorer before running the test...

+ The modified version of P3ICLI under test failed due to a regression
  (i.e., a local code change did not pass the test suite).

+ There's a bug in the test script.

