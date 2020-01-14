
output: main.o ant.o langtons_ant.o input_validation.o menu.o
	g++ main.o ant.o langtons_ant.o input_validation.o menu.o -o output

main.o: main.cpp 
	g++ -c main.cpp

ant.o: ant.cpp ant.hpp
	g++ -c ant.cpp

langtons_ant.o: langtons_ant.cpp langtons_ant.hpp
	g++ -c langtons_ant.cpp

input_validation.o: input_validation.cpp input_validation.hpp
	g++ -c input_validation.cpp

menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp


clean:
	rm *.o output

