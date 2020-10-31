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
	string name{"Player"};
	int age{0};
	int xp{3};

	//methods
	void talk(string msg);
	bool is_dead();
};

class Account
{
	//attibutes
	string name{"Account"};
	double Blance{0};

	//methods
	bool deposit(double);
	bool withdraw(double);
};
int main() {

	Account Franks_account;
	Account Prasads_account;
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
