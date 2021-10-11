derlecalistir:program calistir

program:Node.o LinkedList.o Main.o
	g++ ./lib/Node.o ./lib/LinkedList.o ./lib/Main.o -o ./bin/program
	
Node.o:
	g++ -I "./include" -c ./src/Node.cpp -o  ./lib/Node.o

LinkedList.o:
	g++ -I "./include" -c ./src/LinkedList.cpp -o  ./lib/LinkedList.o

Main.o:
	g++ -I "./include" -c ./src/Main.cpp -o  ./lib/Main.o

calistir:
	./bin/program.exe