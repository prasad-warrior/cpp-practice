/*
 * Account.cpp
 *
 *  Created on: Oct 31, 2020
 *      Author: echo
 */

#include "Account.hpp"


bool Account::withdraw(double amt)
{
	bool ok = false;
	if(balance-amt >0)
	{
		balance -= amt;
		ok=true;
	}
	return ok;
}
bool Account::deposite(double amt)
{
	balance +=amt;
	return true;
}
