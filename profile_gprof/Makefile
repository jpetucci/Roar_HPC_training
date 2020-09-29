# On Bridges we will check versus your performance versus Intel MKL library's BLAS. 

CC = icc 
OPT = -O3 -xHost
CFLAGS = -Wall -std=gnu99 $(OPT)
#MKLROOT = /opt/intel/composer_xe_2013.1.117/mkl
#LDLIBS = -lrt -Wl,--start-group $(MKLROOT)/lib/intel64/libmkl_intel_lp64.a $(MKLROOT)/lib/intel64/libmkl_sequential.a $(MKLROOT)/lib/intel64/libmkl_core.a -Wl,--end-group -lpthread -lm
LDLIBS = -lrt  -I$(MKLROOT)/include -Wl,-L$(MKLROOT)/lib/intel64/ -lmkl_intel_lp64 -lmkl_core -lmkl_sequential -lpthread -lm -ldl

targets = benchmark-naive benchmark-blas benchmark-naive-gprof
objects = benchmark.o dgemm-naive.o dgemm-blocked.o dgemm-blas.o

.PHONY : default
default : all

.PHONY : all
all : clean $(targets)

benchmark-naive : benchmark.o dgemm-naive.o 
	$(CC) -o $@ $^ $(LDLIBS)
benchmark-blas : benchmark.o dgemm-blas.o
	$(CC) -o $@ $^ $(LDLIBS)
benchmark-naive-gprof : benchmark.o dgemm-naive.o
	$(CC) -o $@ $^ $(LDLIBS) -pg
    
%.o : %.c
	$(CC) -c $(CFLAGS) -pg $<

.PHONY : clean
clean:
	rm -f $(targets) $(objects) *.stdout
