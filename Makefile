all: tgg.exe

tgg.exe: grid4.o main.o
	g++ -fpermissive grid4.o main.o -o tgg.exe

main.o: main.cpp
	g++ -fpermissive -c -Wall main.cpp

grid4.o: grid4.cpp
	g++ -fpermissive -c -Wall grid4.cpp

clean:
	rm -rf *.o tgg.exe
