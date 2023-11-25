CC = g++
CFLAGS = -Wall -g

all: uflip-side

uflip-side: uflip-side.o uflip-side.cc
	$(CC) $(CFLAGS) -o flip-side uflip-side.o uflip-side.cc

uflip-side.o: uflip-side.cpp uflip-side.h
	$(CC) $(CFLAGS) -c uflip-side.cpp

clean:
	rm -f flip-side uflip-side.o
