CC = g++
CFLAGS = -Wall -g

all: flip-side

flip-side: flip-side.o flip-side.cc
	$(CC) $(CFLAGS) -o flip-side flip-side.o flip-side.cc

flip-side.o: flip-side.cpp flip-side.h
	$(CC) $(CFLAGS) -c flip-side.cpp

clean:
	rm -f flip-side flip-side.o
