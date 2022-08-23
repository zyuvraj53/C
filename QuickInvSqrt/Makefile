output: main.o message.o
	g++ main.o message.o -o output

main.o: main.c++
	g++ -c main.c++

message.o: message.c++ message.h
	g++ -c message.c++

clean: 
	del *.o output.exe

target: dependencies
	dependencies