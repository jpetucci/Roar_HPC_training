# GBD Example

Users will use git to get these example files, we will go through the various Make files and then use GDB to find the problem with the included code, which calculates factorial of an input.  The code is far more complicated than it needs to be (three .c files) but this is to help show how make and gdb can be used on more complicated examples. 

Clone repo to scratch directory:
```bash
$ cd ~/scratch
$ git clone https://github.com/jpetucci/Roar_HPC_training.git
```

Enter repo, run some git commands
```bash
$ cd Roar_HPC_training
# View commit log
$ git log
# view git status
$ git status
# view branches
$ git branch
# view hidden .git directory
$ ls -a
```

Compile and factorial example:
```bash
$ cd debug_gdb
$ module load gcc/8.3.1
# This uses Makefile
$ make 
$ ./factorial
```

Run gdb debugger
```bash
$ gdb factorial
# Set a breakpoint on line 10 of a source file
(gdb) break facCalc.c:10
# Run program
(gdb) run
# Step line by line
(gdb) step
# Print a variable value
(gdb) print counter
# Use step and print to find the error in the loop interation condition
# Quit
(gdb) quit
```

Create a new branch and the fix bug
```bash
$ git checkout -b debug
# Add <= to facCalc.c for loop using an editor (vim, emac, nano, gedit, etc.)
# Recompile code and run to confirm the bug is fixed
$ make
$ ./factorial
# commit changes to branch
$ git commit -am "Fix for loop exit criterion"
# View git log
$ git log
# View differences between debug and master branches
$ git diff master debug
# Merge changes from debug into master branch
$ git checkout master
$ git merge debug
# The new commit should now show in the master branch
$ git log
```

