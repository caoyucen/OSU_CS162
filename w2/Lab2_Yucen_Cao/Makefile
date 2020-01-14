output: main.o function.o
	g++ main.o function.o -o output


function.o: function.cpp function.hpp
	g++ -c function.cpp 

main.o: main.cpp 
	g++ -c main.cpp

clean:
	rm *.o output
