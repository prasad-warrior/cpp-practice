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

	Player *enemy{nullptr};
	enemy = new Player;

	delete enemy;



	return 0;
}
