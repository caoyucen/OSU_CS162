SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := output
CXX_FLAGS := -std=c++11 

all: $(OBJS)
	g++ $(CXX_FLAGS) -O3 $(OBJS) -o $(TARGET)

%.o: %.cpp
	g++ $(CXX_FLAGS) -O3 -c $< -o $@

clean:
	rm -rf $(OBJS) $(TARGET)

zip:
	zip Project3_Yucen_Cao.zip *.cpp  *.hpp Makefile Project3_Reflection_Yucen_Cao.pdf

.PHONY: tests
tests:
	cd $(shell pwd)/cmake-build-debug/tests && make -j4 && valgrind --leak-check=full ./test_dynamic_array
	cd $(shell pwd)/cmake-build-debug/tests && make -j4 && valgrind --leak-check=full ./test_utils

.PHONY: run 
run:
	make clean
	make -j4
	valgrind --leak-check=full ./output
