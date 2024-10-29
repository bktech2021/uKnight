CC=clang
#CC=gcc
CFILES:=$(shell find . -name "*.c")
CFLAGS=-Wall \
       -Iinclude \
       -lraylib

all:
	$(CC) $(CFILES) $(CFLAGS) -o uKnight
