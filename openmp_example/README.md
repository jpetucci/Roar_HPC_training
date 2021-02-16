# OpenMP Example

This repo contains an example for using OpenMP on the Roar systems to complete a list of tasks in a file.

Usage:
```bash
$ cd openmp_example
$ module purge
$ module load gcc/8.3.1
$ gcc -fopenmp hello_omp.c
$ OMP_NUM_THREADS=4 ./a.out 
```
