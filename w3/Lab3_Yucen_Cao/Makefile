output: main.o die_class.o loadedDie_class.o game_class.o menu.o input_validation.o
	g++ main.o die_class.o loadedDie_class.o game_class.o menu.o input_validation.o -o output


die_class.o: die_class.cpp die_class.hpp
	g++ -c die_class.cpp 

loadedDie_class.o: loadedDie_class.cpp loadedDie_class.hpp
	g++ -c loadedDie_class.cpp

game_class.o: game_class.cpp game_class.hpp
	g++ -c game_class.cpp

menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp

input_validation.o: input_validation.cpp input_validation.hpp
	g++ -c input_validation.cpp


main.o: main.cpp 
	g++ -c main.cpp

clean:
	rm *.o output
