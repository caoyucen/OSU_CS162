output: main.o read_from_file.o buliding_class.o person_class.o student_class.o instructor_class.o university_class.o menu.o input_validation.o save_to_file.o
	g++ main.o read_from_file.o buliding_class.o person_class.o student_class.o instructor_class.o university_class.o menu.o input_validation.o save_to_file.o -o output

read_from_file.o: read_from_file.cpp read_from_file.hpp
	g++ -c read_from_file.cpp

save_to_file.o: save_to_file.cpp save_to_file.hpp
	g++ -c save_to_file.cpp

buliding_class.o: buliding_class.cpp buliding_class.hpp
	g++ -c buliding_class.cpp

person_class.o: person_class.cpp person_class.hpp
	g++ -c person_class.cpp

student_class.o: student_class.cpp student_class.hpp
	g++ -c student_class.cpp

instructor_class.o: instructor_class.cpp instructor_class.hpp
	g++ -c instructor_class.cpp

university_class.o: university_class.cpp university_class.hpp
	g++ -c university_class.cpp

menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp

input_validation.o: input_validation.cpp input_validation.hpp
	g++ -c input_validation.cpp

main.o: main.cpp 
	g++ -c main.cpp

clean:
	rm *.o output
