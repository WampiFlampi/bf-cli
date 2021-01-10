all: bin

bin: main.cpp engine.h graphics.h
	g++ -lncurses main.cpp engine.h graphics.h -o bin


