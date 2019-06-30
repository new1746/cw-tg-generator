CC=g++ #Компилятор
CFLAGS=-c #Флаги

all: tgg

tgg: main.o grid4.o grid8.o
	$(CC) main.o grid4.o grid8.o -o tgg

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

grid4.o: grid4.cpp
	$(CC) grid4.cpp

grid8.o: grid8.cpp
	$(CC) grid8.cpp

clean:
	rm -rf *.o hello
