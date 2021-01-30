all: bin

bin: main.cpp engine 
	g++ -lncurses main.cpp -o bin



