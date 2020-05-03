playerinput.o: playerinput.cpp playerinput.h
	g++ -c playerinput.cpp

printboard.o: printboard.cpp printboard.h
	g++ -c printboard.cpp

info.o: info.cpp info.h
	g++ -c info.cpp

main.o: main.cpp info.h printboard.o playerinput.o
	g++ -c main.cpp

main: main.o info.o printboard.o playerinput.o
	g++ main.o info.o printboard.o playerinput.o -o main
