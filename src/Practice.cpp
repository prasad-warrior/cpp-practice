//============================================================================
// Name        : Practice.cpp
// Author      : Prasad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
	//attributes
	string name;
	int age;
	int xp;

	//methods
	void talk(string msg);
	bool is_dead();
};

int main() {

	Player Frank;
	Player Prasad;


	Player players[] {Frank,Prasad};

	vector <Player> player_vec {Frank};
	player_vec.push_back(Prasad);//dynamically add Object to vector.

	Player *enemy{nullptr};
	enemy = new Player;

	delete enemy;



	return 0;
}
