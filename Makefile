Cxx=g++
CFLAGS=-g -Wall

all: compile

%.o: %.c
	$(Cxx) $(CFLAGS) -c $?


