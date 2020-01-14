//
//  dynamic_array.hpp
//  Project2
//
// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//

#ifndef dynamic_array_hpp
#define dynamic_array_hpp
#pragma once

#include <stdexcept>
#include <algorithm>
#include <string>


//dynamic array like vector
template<typename T>
class dynamic_array {
private:
	int capacity_;            
	int size_;                
	T *data_;                 
	
protected:
	// Check if a specific location is within valid range.
	bool check_range(int idx, bool fail_loudly = false) const {
		if (idx < 0 || idx >= size_) {
			if (fail_loudly) {
				throw std::runtime_error("Out of range: trying to access location " + std::to_string(idx) + " for an array of size " + std::to_string(size_));
			}
			return false;
		} else {
			return true;
		}
	}
	
public:
	// Constructor that constructs a dynamic array instance with specified capacity.
	dynamic_array(int capacity = 10) : capacity_(capacity), size_(0) {
		data_ = new T[capacity];
	}
	
	//Constructor that constructs a dynamic array instance with specified capacity.
	dynamic_array(int size, const T &init) : capacity_(size), size_(size) {
		data_ = new T[capacity_];
		
		for (int i = 0; i < size; ++i) {
			data_[i] = init;
		}
	}
	
	// Copy constructor.
	dynamic_array(const dynamic_array<T> &other) : capacity_(other.capacity_), size_(other.size_) {
		data_ = new T[capacity_];
		
		for (int i = 0; i < size_; ++i) {
			data_[i] = other.data_[i];
		}
	}
	
	
	// Adds a new element to the end of this array and resize
	void add(const T &element) {
		if (size_ >= capacity_) {
			resize(capacity_ * 2);
		}
		
		data_[size_] = element;
		++size_;
	}
	
	
	// Copy assignment operator.
	dynamic_array &operator=(const dynamic_array<T> &other) {
		if (this != &other) {
			// Release the memory of current instance
			delete[] data_;
			
			// Allocate space for the array
			capacity_ = other.capacity_;
			size_ = other.size_;
			data_ = new T[capacity_];
			
			for (int i = 0; i < size_; ++i) {
				data_[i] = other.data_[i];
			}
		}
		return *this;
	}
	
	// Adjust the capacity of the array by allocating new memory.
	void resize(int n) {
		try {
			T *new_data = new T[n];
			std::copy_n(data_, size_, new_data);
			delete[] data_;
			data_ = new_data;
			capacity_ = n;
		} catch (const std::exception &e) {
			throw std::runtime_error("out of memory!");
		}
	}
	
	// Accessor for the element in the array
	const T &operator[](int idx) const {
		check_range(idx, true);
		return data_[idx];
	}
	
	// Accessor for the element in the array
	T &operator[](int idx) {
		check_range(idx, true);
		return data_[idx];
	}
	
	// Get the current size of the array.
	int size() const {
		return size_;
	}
	
	// Remove the last element of the array.
	T remove_last() {
		return remove(size_ - 1);
	}
	
	// Remove the element at the specified location in the array.
	T remove(int idx) {
		// Check  index is inside the range or not
		check_range(idx, true);
		
		// remove element
		T element_to_remove = data_[idx];
		
		// First decrease the size of the array
		--size_;
		
		for (int i = idx; i < size_; ++i) {
			data_[i] = data_[i + 1];
		}
		
		return element_to_remove;
	}
	
	
	// Destructor that destroy the dynamic array and release the memory properly.
	~dynamic_array() {
		delete[] data_;
	}
	
};

#endif /* dynamic_array_hpp */
