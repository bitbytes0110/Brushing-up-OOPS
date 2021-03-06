// Unique ptr test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test
{
	int data;
public:
	Test():data(0)
	{
		cout << "Test constructor(" << data << ")" << endl;
	}
	Test(int var) :data(var)
	{
		cout << "Test constructor(" << data << ")" << endl;
	}
	~Test()
	{
		cout << "Test Destructor(" << data << ")" << endl;
	}

};
int main()
{
    std::cout << "Unique PTR!\n"; 

	unique_ptr<Test> t3{ new Test{333} };
	unique_ptr<Test> t4 = make_unique<Test>( 444);
	auto t5 = make_unique<Test>(555);

	t4 = move(t5);

	if (!t5)
	{
		cout << "t5 is NULL" << endl;
	}

	vector<unique_ptr<Test>> tObjects;
	tObjects.push_back(move(t3));
	tObjects.push_back(move(t4));

}

