#Amie Newman
#MakeFile
#11/8/2016
#Makefile for git hub program


#compiler
CC = g++
#the compiler-g++ in this case
#compiler flags
CFLAGS = -c -Wall
#turns on all error warnings when it compiles
#executable
TARGET = main

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)
#linking

main.o: main.cpp
	$(CC) main.cpp $(CFLAGS)
#compiles main.o

clean:
	rm *.o main *~
#removes all object and emacs backups
