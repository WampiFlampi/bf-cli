all: bin

bin: main.cpp engine 
	g++ -lncurses main.cpp -o bin

clean:
	rm -f bin

install: all
	cp -f bin /bin/bf

uninstall:
	rm -f /bin/bf






