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

int *create_array(size_t size, int initial_value = 0)
{
	int *int_pointer{nullptr};

	int_pointer = new int[size];//allocates memory with size byes

	for(size_t i {0}; i<size; ++i)
	{
		*(int_pointer+i) = initial_value;
	}
	return int_pointer;
}
void display(int *storage,size_t size)
{
	for(size_t i {0}; i<size; ++i)
	{
		cout << storage[i] << " ";
	}
	cout << endl;
}

int main() {
	int *storage {nullptr};


	storage = create_array(100000,20);
	display(storage,10000);

	delete [] storage;


	return 0;
}
