showfile.o: showfile.cpp showfile.h
	g++ -c showfile.cpp

updatefile.o: updatefile.cpp updatefile.h
	g++ -c updatefile.cpp

checkwin.o: checkwin.cpp checkwin.h
	g++ -c checkwin.cpp

input.o: input.cpp input.h
	g++ -c input.cpp

printboard.o: printboard.cpp printboard.h
	g++ -c printboard.cpp

info.o: info.cpp info.h
	g++ -c info.cpp

main.o: main.cpp info.h printboard.h input.h checkwin.h updatefile.h showfile.h
	g++ -c main.cpp

main: main.o info.o printboard.o input.o checkwin.o updatefile.o showfile.o
	g++ main.o info.o printboard.o input.o checkwin.o updatefile.o showfile.o -o main
