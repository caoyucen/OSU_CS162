//
//  input_validation.cpp
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "input_validation.hpp"

//check the string is empty or not, and return the string
string enter_input()
{
	string temp;
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		temp.clear(); //empty string temp
		getline(std::cin,temp);
		if(temp.empty() && temp.length() == 0) {
			std::cout << "You didn't enter anything, please Enter again."<< std::endl;
		}
		else{
			re_enter_mark = 0;
		}
	}
	
	return (temp);
}





//to check it is int or not
bool validation_int(string s)
{
	for(int i = 0; i < s.length(); i++){
		if(!isdigit(s[i])){
			return (0); //it is not non-negative int
		}
	}
	
	//it is non-negative int
	return (1);
}





//check the string is float or not
bool validation_float(string s)
{
	int mark = 1;
	
	if(!isdigit(s[0])){
		return (0); //it is not non-negative int
	}

	for(int i = 1; i < s.length(); i++){
		if(!isdigit(s[i])){
			if (mark == 1)
			{
				if (s[i] == '.'){
					mark = 0;
				}
				else{
					return (0);
				}
			}
			else{
				return (0); 
			}
		}
	}
	
	return (1);
}






//to check the float from 0 to top_score
float validation_scores(string temp, float top_score)
{
	float num = -1.1; // initialize num 
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_float(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			temp = enter_input();
		}
		else{
			//num = stof(temp);
			num =  myStof(temp);
			if (num > top_score || num < 0){   
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				temp = enter_input();
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}




// C++ version in osu not suppot the stoi function, so I write myStoi
int myStoi(string s) 
{ 
	int res = 0; // Initialize result 
	
	// Iterate through all characters of input string and 
	for (int i = 0; s[i] != '\0'; ++i) 
		res = res*10 + s[i] - '0'; 
	
	return res; 
}


// C++ version in osu not suppot the stof function, so I write myStof
float myStof(string s) {
	float res = 0.0;
	int temp1 = 0;
	int temp2 = 0;
	
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '.')
		{
			temp1 = temp1*10 + s[i] - '0'; 
		}
		else
		{
			i++;
			int number_decimal = 0;  //the number of decimal
			while(s[i] != '\0')
			{
				temp2 = temp2*10 + s[i] - '0';
				number_decimal++;
				i++;
			}
			
			res = temp1 + temp2/(pow(10,number_decimal ));
		}
	}
	
	return (res);
}





//This function to check if it is only 0-4 
int validation(string temp)
{
	int num = -1; // initialize num to -1 which is not 0 or 1
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num >4 || num < 1){   //choose the program from 1 to 4
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				temp = enter_input();
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}


//To check the number no more than total number
int validation_number_person(string temp, int all_person)
{
	int num = 0;
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num == 0 || num > all_person){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				temp = enter_input();
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}

//This function to check if it is only 0/1
int validation_one_zero(string temp)
{
	int num = -1; // initialize num to -1 which is not 0 or 1
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			//std::cin >> temp;
			//getline(std::cin, temp);
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num != 0 && num != 1){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				//std::cin >> temp;
				//getline(std::cin, temp);
				temp = enter_input();
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}

//To check age is postive int or not, the biggest is 100
int validation_age(string temp)
{
	int num = 0;
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			//std::cin >> temp;
			//getline(std::cin, temp);
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num < 16 || num > 100){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				//std::cin >> temp;
				//getline(std::cin, temp);
				temp = enter_input();
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}

