//============================================================================
// Name        : Practice.cpp
// Author      : Prasad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;


void display(vector<string> * v)
{
	for(auto str: *v)
	{
		cout << str <<endl;
	}
}
int main() {

//vector of string objects
	vector <string> names {"prasad","devi","reddy"};

	display(&names);

	return 0;
}
