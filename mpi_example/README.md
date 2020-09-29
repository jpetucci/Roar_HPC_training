# MPI Example

This repo contains an example for using MPI on the Roar systems to complete a list of tasks in a file.

Usage:
```bash
$ module purge
$ module load intel impi
$ mpicc -o mpi_hello_world.out mpi_hello_world.c
$ mpirun -np 4 ./mpi_hello_world.out
```
