# Gprof Example

This repo contains an example for using gprof to profile naive dgemm (double precision general matrix multiplication) O(n^3).

Usage:
```bash
#Set up environment and compile the code
$ cd profile_gprof
$ module purge
$ module load intel mkl
$ make
#Run benchmark the performance of the naive algorithm
$ ./benchmark-naive-gprof
#Use gprof to find hotspots
$ gprof ./benchmark-naive-gprof gmon.out
#Run highly optimized dgemm from MKL
$ ./benchmark-blas 
```
