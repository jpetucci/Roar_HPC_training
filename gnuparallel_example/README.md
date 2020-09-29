# GNU Parallel Example

This repo contains an example for using GNU parallel (gnu.org/software/parallel/) on the Roar systems to complete a list of tasks in a file. The example distributes tasks across multiple nodes.

Requirements:
A conda environment that contains R with the benchmarkme library and the latest version of gnu parallel.
To create this on Roar follow the steps below:  
$ module purge && module load python/3.6.3-anaconda5.0.1  
$ conda create -n myenv -y  
$ source activate myenv  
$ conda install -c conda-forge r-benchmarkme  
$ conda install -c conda-forge parallel  

Alternative:
You can use the version of R and gnu parallel on the software stack. To use this option, place the following commands in the jobscript.pbs file.
$ module purge
$ module load R
$ module load gcc/5.3.1
$ module load parallel
(NOTE: The R package benchmarkme must be installed. For this open R and run install.packages("benchmarkme"))

Summary:
The list of tasks (given in task_list.txt) are simple R benchmarkme runs defined in the R-script (my_R_script). The jobscript.pbs file requests 2 nodes and 10 cores per node. The env_parallel command distributes the list of tasks to the nodes assigned to the job ($PBS_NODEFILE). The --jobs option restricts the maximum number of jobs simultaneously running on each node to 10. The example_output directory contains expected output of a successful job.


Usage:
1. Clone the repo to Roar  
2. cd into the repo  
3. Edit jobscript.pbs to point to your conda environment (Or setup the alternative option) 
4. Submit the job script (qsub jobscript.pbs)  
