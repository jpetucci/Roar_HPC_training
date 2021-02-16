# GNU Parallel Example

This repo contains an example for using GNU parallel (gnu.org/software/parallel/) on the Roar systems to complete a list of tasks in a file. The example distributes tasks across multiple nodes.

Contents:
* example_output - directory containing example output for this case
* task_list.txt - list of computational tasks (terminal commands) to be completed
* my_R_script - R Script
* jobscript.pbs - job script to submit this case as a batch job

Summary:
The list of 10 tasks (given in task_list.txt) are simple R benchmarkme runs defined in the R-script (my_R_script). The jobscript.pbs file requests 2 nodes and 5 cores per node. The env_parallel command distributes the list of tasks to the nodes assigned to the job ($PBS_NODEFILE). The --jobs option restricts the maximum number of jobs simultaneously running on each node to 5. The example_output directory contains expected output of a successful job.


Submit job:
```bash
$ cd gnuparallel_example
$ qsub jobscript.pbs
```

Check job status:
```bash
$ qstat -u $USER
```

Review output: job_parallel_output, gnuparallel.log, jobscript.pbs.o*
