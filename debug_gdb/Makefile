# Sample typical Makefile
#
# Adam Lavely
# Spring 2018

#-#-#-#-#
# Compiler
CC=gcc
# Can be any compilers in your path
# Know what modules you have loaded (comment!)
# $ module load gcc/5.3.1

# Flags
CFLAGS=-c -g
#CFLAGS=-c -Wall -O2
#-#-#-#-#

all: factorial

factorial: factorial.o readInVar.o facCalc.o
	$(CC) factorial.o readInVar.o facCalc.o -o factorial

factorial.o: factorial.c
	$(CC) $(CFLAGS) factorial.c

readInVar.o: readInVar.c
	$(CC) $(CFLAGS) readInVar.c

facCalc.o: facCalc.c
	$(CC) $(CFLAGS) facCalc.c

clean:
	rm *o factorial

