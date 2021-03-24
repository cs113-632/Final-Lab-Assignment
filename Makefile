CC = g++
CFLAGS = -g -std=c++11

all: run

run: compile
	./main.out

clean:
	rm *.o *.out 

clean-window:
	cmd //C del *.o *.out