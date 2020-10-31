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

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int x {100};
	int y {200};

	swap(&x,&y);

	cout << "x:"<< x << "  y:"<<y<< endl;



	return 0;
}
