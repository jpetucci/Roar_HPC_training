# MPI Example

This repo contains an example for using MPI on the Roar systems to print hello from multiple processes/ranks.

Usage:
```bash
$ cd mpi_example
$ module purge
$ module load intel impi
$ export UCX_TLS=all
$ mpiicc -o mpi_hello_world.out mpi_hello_world.c
$ mpirun -np 4 ./mpi_hello_world.out
```
