/*
 * Account.hpp
 *
 *  Created on: Oct 31, 2020
 *      Author: echo
 */

#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_

#include <iostream>
#include <string>

using namespace std;
class Account {
private:
	string name;
	double balance;

public:
	void set_name(string nm){name = nm;}
	string get_name(){return name;}

	bool deposite(double);
	bool withdraw(double);

};

#endif /* ACCOUNT_HPP_ */
