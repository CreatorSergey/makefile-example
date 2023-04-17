CC = g++
CPPFLAGS = -Wall -g -pthread
LDFLAGS= -Wall -g
LDLIBS=

main: main.o point.o
	$(CC) $(LDFLAGS) -o main main.o point.o $(LDLIBS)

main.o: main.cpp point.h
	$(CC) $(CPPFLAGS) -c main.cpp

point.o: point.h point.cpp
	$(CC) $(CPPFLAGS) -c point.cpp