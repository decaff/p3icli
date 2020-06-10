Background
==========
In the long history of p3icli's development, one of the more surprising user
requests was ensuring that the program ran without error under the Windows Task
Scheduler while no one was logged into the host PC.  A fair amount of effort
was required to add this functionality and so, tests were developed to ensure
that future releases of p3icli don't bork Task Scheduler operability.

Three tests in this directory exercise various "insert slide" code paths that,
in the past, croaked under Task Scheduler.  Each test must be run as a
_separate_ Task Scheduler "task".  Do _not_ run all three tests at once
under Task Scheduler.


Test Pre-conditions
===================
+ The version of p3icli under test must be copied to <root>/p3icli/test .

+ The test environment described in <root>/p3icli/test/AAA_readme.txt must be
  correctly initialized.


Dry Run
=======
To run these tests in a shell environment prior to configuring Task Scheduler,
take the following steps:

    1) Invoke bash and cd to <root>/p3icli/test/ts_scripts.
    2) Run each of these commands from a shell prompt:

        bash ts_simple.sh
        bash 3rd_party.sh
        bash ts_cpy_fmt.sh

    3) Each test will appear to "hang" for 13-17 seconds--that's by
       design.  Refer to the section of the p3icli documentation entitled
       "Task Scheduler Hints/Caveats" for an explanation of, among other
       things, the -T command line switch.

    4) A successful test run will terminate silently with exit code 0.

    5) When all three tests terminate silently with exit code 0, it's
       appropriate to move on to Task Scheduler configuration (next topic).


Running The Tests Under Task Scheduler
======================================
As a first step, open the p3icli help documentation and read the section
entitled "Task Scheduler Hints/Caveats".  It's not long.

With that explanatory info consumed, invoke the Windows Task Scheduler and
navigate to the Task Scheduler Library.

1) Create a new task called:

    "p3icli simple"

2) Add this Action to the task:

     bash <path_to_root>\p3icli\test\ts_scripts\ts_simple.sh

3) Add a Trigger to start the task 5-6 minutes in the future, today.

4) Click on the new task's General tab and tick "Run with highest privileges"
   and also tick "Run whether user is logged on or not".

5) Save these settings (you will be prompted for your password).

6) Log out of Windows, but do not shut down.  Wait a minute or so until after
   the future Trigger time has elapsed.

Log back into Windows and re-open Task Scheduler.  The "Last Run Result" for
the "p3icli simple" task should be:

        "The operation completed successfully.  (0x0)"

Either way (successful or not), the log file for this script (saved in
c:\temp) will show the program's exit code and any errors that occurred.
A typical, successful log looks like this:

0                        <-- expected p3icli exit code
p3icli: info: [06/09 21:20:25.038] : try to start PPT via PATH env var
p3icli: info: [06/09 21:20:25.041] : PPT start via PATH env var failed (not an error)
p3icli: info: [06/09 21:20:25.041] : try to start PPT via registry-extracted path
p3icli: info: [06/09 21:20:25.050] : PPT started via registry path...now sleeping
p3icli: info: [06/09 21:20:38.050] : Sleep complete, command line wait Time complete
p3icli: info: [06/09 21:20:38.050] : initializing COM
p3icli: info: [06/09 21:20:38.074] : COM initialization complete
p3icli: info: [06/09 21:20:38.244] : stripping blank slide
p3icli: info: [06/09 21:20:38.267] : blank slide deleted
p3icli: info: [06/09 21:20:38.289] : parsing script(s)
p3icli: info: [06/09 21:20:39.732] : all script(s) completed...killing ppt
p3icli: info: [06/09 21:20:40.162] : ppt killed
p3icli: info: [06/09 21:20:40.162] : freeing acquired resources...
p3icli: info: [06/09 21:20:40.195] : exiting p3icli...

At this point you should open and visually scan the presentation created in
c:\temp by the task_sched_simple.txt script and make sure it looks legit.

7) Once the "p3icli simple" task completes successfully and the resultant
   presentation looks legit, _DISABLE_ the "p3icli simple" task in the Task
   Scheduler Library.

One down, two to go.

Repeat steps 1-7 for 3rd_party.sh and ts_cpy_fmt.sh .  Be sure to choose
new, unique task names during step 1.
