//
//  game.cpp
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

#include "game.hpp"



//get the name 
string name_animals(int type)
{
	string s;
	
	if (type == 1){
		s = "tiger";
	}
	if (type == 2){
		s = "penguin";
	}
	if (type == 3){
		s = "turtle";
	}
	return(s);
}



int pick_event(int feed_types)
{
	int pick = 0;
	int temp_pick = 0;
	if (feed_types == -1){
		//111234 
		int temp_event1[6] = {1,1,1,2,3,4,};  // sick from 25% -> 50%
		temp_pick = rand()%6;    //get number from 0 to 5
		pick = temp_event1[temp_pick];  //choose the type
	}
	else if (feed_types == 0){
		pick = rand()%4 + 1;
	}
	else if (feed_types == 1){
		//sick from 25% -> 12.5%  25:58:58:58/59
		temp_pick = rand()%200 + 1;  //get number from 1 to 200
		if(temp_pick <= 25){
			pick = 1;
		}
		else if(temp_pick > 25 && temp_pick <= (25 +58)){
			pick = 2;
		}
		else if (temp_pick >= (25 +58) && temp_pick <= (25 +58 + 58)){
			pick = 3;
		}
		else{
			pick = 4;
		}
	}
	
	return (pick);
}
	





void random_event1(int type, Zoo& zoo) //sickness
{
	string s;
	int mark = 1;
	
	if (type == 1)
	{
		if(zoo.num_of_tigers() <= 0)
		{
			mark = 0;
		}
		else{
			//remove tiger
			zoo.remove_tigers();
		}
	}
	if (type == 2)
	{
		if(zoo.num_of_penguins() <= 0)
		{
			mark = 0;
		}
		else{
			//remove penguins
			zoo.remove_penguins();
		}
	}
	if (type == 3)
	{
		if(zoo.num_of_turtles() <= 0)
		{
			mark = 0;
		}
		else{
			//remove turtles
			zoo.remove_turtles();
		}
		
	}
	
	//status messages
	if (mark == 0){
		s = "All of the " + name_animals(type) + " are dead. You need to buy it.";
	}
	else{
		s = "Today is a bad day, a " +name_animals(type) + " get sick and die.";
		status_message(s);
	}
}

//I write my own itos
string myItos(int n)
{
	string s;
	char c;
	
	//to find how many digits in it
	int temp = n;
	int k = 0;
	while(temp >= 1){
		temp = temp / 10;
		k++;
	}
	
	//int to string
	int temp2 = 0;
	for (int i = 0 ; i< k; i++){
		temp2 = n % 10;
		c = temp2 + '0';
		s = c + s;
		n = n / 10;
		
	}

	return (s);
}


int random_event2(Zoo& zoo) //boom
{
	int number_tigers = 0;
	int bonus_base = 0;   //bonus for each tigers
	int bonus = 0; //bonus for all tigers
	string temp;
	string s;
	
	number_tigers =zoo.num_of_tigers();
	if (number_tigers <= 0){
		
		////status messages
		s = "All tigers are dead. Can't have bonus day. You need to buy it.";
		status_message(s);
		return(0);
	}
	bonus_base = rand()%251 + 250;
	bonus = bonus_base * number_tigers;
	temp = myItos(bonus);
	
	
	//status messages
	s = "Today is National Tiger Day! Tigers generate money today! You made: " + temp +" extra dollars for each tiger you own!";
	status_message(s);
	
	return (bonus);
}

//have baby
bool random_event3(int type, Zoo& zoo)
{
	string s;
	
	//check the adult number 
	int adult = -1; //initialize 
	
	if(type == 1){
		adult = zoo.adult_tigers();
		if (adult > 0){
			zoo.baby_tigers();
		}
	}
	else if(type == 2){
		adult = zoo.adult_penguins();
		if (adult > 0){
			zoo.baby_penguins();
		}
	}
	else if(type == 3){
		adult = zoo.adult_turtles();
		if (adult > 0){
			zoo.baby_turtles();
		}
	}
	
	//if no reuturn (0)
	if(adult == 0){
		return (0);
	}
	
	
	//status messages
	s = "Today is a good day, " +name_animals(type) + " have babies.";
	status_message(s);
	
	return(1);
}



void random_event4()
{
	string s;
	
	//status messages
	s = "Nothing happens today.";
	status_message(s);
}



int game(int feed_type, Zoo& zoo)
{
	string s;
	int bonus = 0;
	int event = 0;
	
	int type = 0;
	
	type = rand()%3 + 1;
	
	event = pick_event(feed_type);
	if (event == 1){ 
		//sick
		random_event1(type,zoo);
	}
	else if (event == 2){ 
		//boom
		bonus = random_event2(zoo);
	}
	else if (event == 3){  
		//baby
		int mark = 0;   //have baby or not
		int n = 4; // 4 type
		
		for (int i = 0; i < n; i++)
		{
			if (mark == 0){
				if(random_event3(type, zoo) == 0){
					type++;   //if the type of animals don't have adult, then next animal
					if (type > n){
						type = type - n;  //if pick is n+1, then pick is 1
					}
				}
				else{
					mark =1;
				}
			}
		}
		if (mark == 0){
			//status messages
			s = "There is no adult animal in the Zoo. Nothing happens today";
			status_message(s);
		}		
	}
	else if (event == 4){ 
		//nothing happen
		random_event4();
	}
	
	return (bonus);
}



//the day long
bool day(Zoo& zoo, double* money)
{
	int feed_type;
	int add_animal_type = 0;
	float profit = 0.0;
	
	//increase age
	zoo.incincrease_age();
	
	//feed
	feed_type = menu_feed();
	if (feed_type == -1){
		*money = *money - zoo.feed_cost() / 2;
	}
	else if (feed_type == 1){
		*money = *money - zoo.feed_cost() * 2;
	}
	else if (feed_type == 0){
		*money = *money - zoo.feed_cost();
	}
	
	//game
	game(feed_type, zoo);
	
	//buy adult animal or not
	add_animal_type = menu_buy_animal();
	if ( add_animal_type == 1 ){
		//add tiger
		zoo.add_tigers(1, 3);
	}
	else if ( add_animal_type == 2 ){
		//add penguin
		zoo.add_penguins(1, 3);
	}
	else if ( add_animal_type == 3 ){
		//add turtle
		zoo.add_turtles(1, 3);
	}
	
	//end the day or not
	//user choose to end
	if (menu_end() == 0){
		return (0);
	}
	//no money
	if ((*money + profit) <= 0 )
	{
		std::cout << "You don't have any money, game over." << std::endl;
		return (0);
	}
	return (1);
}





