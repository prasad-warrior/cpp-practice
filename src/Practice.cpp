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

#include "Account.hpp"

int main() {
	Account Prasads_account;

	Prasads_account.set_name("Prasad");

	if(Prasads_account.deposite(500.0))
		cout << "Deposite OK" <<endl;
	else
		cout << "deposite Failed" <<endl;

	if(Prasads_account.withdraw(400.0))
		cout << "Widthdraw OK" <<endl;
	else
		cout << "Widthdraw failed" <<endl;

	if(Prasads_account.withdraw(400.0))
			cout << "Widthdraw OK" <<endl;
	else
		cout << "Widthdraw failed" <<endl;
	return 0;
}
