all: tgg.exe

tgg.exe: main.o
	g++ -fpermissive main.o -o tgg.exe

main.o: main.cpp
	g++ -fpermissive -c -Wall main.cpp

clean:
	rm -rf *.o tgg.exe
