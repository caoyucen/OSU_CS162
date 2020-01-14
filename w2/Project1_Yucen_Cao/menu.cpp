//
//  Project1
//  Yucen Cao
//
//In this project, we will implement a program that simulates Langton’s Ant. The rule of Langton’s Ant is very simple: the ant is placed onto the board that is filled with white spaces, and starts moving forward. 
//  
//Design for my program:
//Board class: No board class, I use a dynamic int array for the board. 0 will be space , and 1 will be “#” character. In this way, I can print the board every step.
//Ant initial direction: The initial direction for the ant is fixed facing up.
//Largest number of steps/rows/columns:  The largest number of steps is 1000. Because we need to print out every step, so I think 1000 steps are enough for the project. And 1000 is much more enough for rows and columns.
//Edge cases: Skip the step forward step, turn right and then continue on. In the edge cases, only turn right, the color will not change because the ant doesn’t step forward.
//Random starting location: I have random starting location in the program. Users can choose enter by themselves or get random location.
//
//

#include "menu.hpp"

// C++ version not suppot the stoi function, so I write myStoi
int myStoi(string s) 
{ 
	int res = 0; // Initialize result 
	
	// Iterate through all characters of input string and 
	// update result 
	for (int i = 0; s[i] != '\0'; ++i) 
		res = res*10 + s[i] - '0'; 
	
	// return result. 
	return res; 
}

//to check the input is right or wrong, using for start or not
int menu_start(string temp)
{
	int start = -1;
	//start the game or not
	while(start == -1)
	{
		if (validation_int(temp))
		{
			start =myStoi(temp);
			//start = stoi(temp);
			if((start != 0) && (start != 1))
			{
				std::cout << "You Enter the wrong number, please Enter again. Please Enter 0 or 1(YES enter 1 /NO enter 0)? " << std::endl;
				temp.clear(); //empty string temp
				std::cin >> temp;
				start = -1;
			}
		}
		else
		{
			std::cout << "You Enter the wrong number, please Enter again. Please Enter 0 or 1(YES enter 1 /NO enter 0)? " << std::endl;
			temp.clear(); //empty string temp
			std::cin >> temp;
			start = -1;
		}
	}
	return (start);
}

//to check the input is right or wrong, if the input is not positive int, enter again,using for input rows, columns, and steps
int menu_positive_number(string temp)
{
	int num = 0;
	int re_enter_mark = 1;
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			std::cin >> temp;
		}
		else{
			num = myStoi(temp);
			//num = stoi(temp);
			if (num == 0 || num > 1000){ //biggest will be what??
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				std::cin >> temp;
				num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);
}

//to check the input is right or wrong,the location should =< rows/columns, and it should be positive int, using for starting location
int menu_location(string temp, int board)
{
	int num = 0;
	int re_enter_mark = 1;
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			std::cin >> temp;
		}
		else
		{
			num = myStoi(temp);
			//num = stoi(temp);
			if (num > board || num <= 0){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				std::cin >> temp;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	num = myStoi(temp);
	//num = stoi(temp);
	return (num);
}

//To enter the input and put it into int *input, return (0) for quit, return(1) to start
bool menu(int *input)
{
	string temp;
	int start = 0;  //start the game 1, or quit the game 0
	bool random_location = 0;
	
	std::cout << "Do you want to start the game?(YES (start simulation) enter 1 /NO (quit) enter 0)?" << std::endl;
	std::cin >> temp;
	
	start = menu_start(temp);
	if (start == 0)
	{
		return (0);
	}
	
	temp.clear(); //empty string temp
	std::cout << "Do you want a random starting location?(YES (random starting location) enter 1 /NO (choose by myself) enter 0)?" << std::endl;
	std::cin >> temp;
	random_location = menu_start(temp);
	
	temp.clear(); //empty string temp
	std::cout << "Please enter the number of rows for the board." << std::endl;
	std::cin >> temp;
	input[0] = menu_positive_number(temp);
	
	temp.clear(); //empty string temp
	std::cout << "Please enter the number of columns for the board." << std::endl;
	std::cin >> temp;
	input[1] = menu_positive_number(temp);
	
	temp.clear(); //empty string temp
	std::cout << "Please enter the number of steps during simulation." << std::endl;
	std::cin >> temp;
	input[2] = menu_positive_number(temp);
	
	if(random_location == 1) //random starting location
	{
		//get number from [a,b], use(rand() % (b-a+1))+ a;
		input[3] = (rand()%(input[0]))+1;  //[1,input[0]], input[0] is rows for the board
		input[4] = (rand()%(input[1]))+1;  //[1,input[1]], input[1] is columns for the board
		
		//test
		//std::cout << "the random number is : " << input[3] <<" and "<< input[4] << std::endl;
	}
	else  //enter the row and columns of the ant.
	{
		temp.clear(); //empty string temp
		std::cout << "Please enter the number of starting row of the ant." << std::endl;
		std::cin >> temp;
		input[3] = menu_location(temp, input[0]);
		
		temp.clear(); //empty string temp
		std::cout << "Please enter the number of starting columns of the ant." << std::endl;
		std::cin >> temp;
		input[4] = menu_location(temp, input[1]);
	}
	return (start);
}
