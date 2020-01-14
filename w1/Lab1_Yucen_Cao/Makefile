
output: main.o determinant.o read_matrix.o input_validation.o
	g++ main.o determinant.o read_matrix.o input_validation.o -o output

main.o: main.cpp 
	g++ -c main.cpp

read_matrix.o: read_matrix.cpp read_matrix.hpp
	g++ -c read_matrix.cpp

determinant.o: determinant.cpp determinant.hpp
	g++ -c determinant.cpp

input_validation.o: input_validation.cpp input_validation.hpp
	g++ -c input_validation.cpp

clean:
	rm *.o output
