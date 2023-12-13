CC=g++
OPT=-O3
CFLAGS=-Wall -Wextra -Wshadow $(OPT)
CPPFILES=main.c++ binaryTrees.c++ grapher.c++
OBJECTS=main.o binaryTrees.o grapher.o

output: $(OBJECTS)
	$(CC) $(CFAGS) $(CPPFILES) -o output

main.o: main.c++
	$(CC) $(CFLAGS) -c main.c++

%.o: %.c++ %.hpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o output.*

# target: dependencies
# 	action