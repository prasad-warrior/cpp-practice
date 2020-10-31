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
public:
	//attributes
	string name{"Player"};
	int age{0};
	int xp{3};

	//methods
	void talk(string msg){cout << name << " says " << msg << endl;};
	bool is_dead();
};

class Account
{
public:
	//attibutes
	string name{"Account"};
	double Blance{0};

	//methods
	bool deposit(double bal){Blance += bal; cout << name <<" :blance:"<< Blance << endl;}
	bool withdraw(double bal){Blance -= bal; cout << name <<" :blance:"<< Blance << endl;}
};
int main() {

	Player Frank;
	Player Prasad;
	Frank.name = "Frank";
	Frank.age = 40;
	Frank.xp = 12;
	Frank.talk("Hi There ");

	Player *enemy = new Player;

	enemy->name = "Enemy";
	enemy->age = 20;
	enemy->talk("I am gona kill you ");

	Account Franks_account;
	Franks_account.name = "frank";
	Franks_account.deposit(5000.0);
	Franks_account.deposit(3000.0);
	Franks_account.withdraw(3000.0);


	return 0;
}
