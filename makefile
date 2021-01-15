all: bin

bin: main.cpp src src/graphics
	g++ -lncurses main.cpp -o bin


