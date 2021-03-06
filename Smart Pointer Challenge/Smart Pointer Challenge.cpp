// Smart Pointer Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test
{
private:
	int data;
public:
	Test() :data(0)
	{
		cout << "\tTest constructor(" << data << ")" << endl;
	}
	Test(int var) :data(var)
	{
		cout << "\tTest constructor(" << data << ")" << endl;
	}
	~Test()
	{
		cout << "\tTest Destructor(" << data << ")" << endl;
	}
	int getData() const 
	{
		return data;
	}
};

unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> & vec, int num);
void display(const vector<shared_ptr<Test>> & vec);


int main()
{
    std::cout << "Smart pointer Challenge!\n";
	unique_ptr<vector<shared_ptr<Test>>> vecPtr;
	vecPtr = make();
	cout << "Enter the number of data points you want to enter : ";
	int num;
	cin >> num;
	fill(*vecPtr, num);
	display(*vecPtr);
	return 0;
}


unique_ptr<vector<shared_ptr<Test>>> make()
{
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> & vec, int num)
{
	int tempData;
	for (int i = 1; i <= num; i++)
	{
		cout << "Enter data point [" << i << "] : ";
		cin >> tempData;

		shared_ptr<Test> tempPtr = make_shared<Test>(tempData);
		vec.push_back(tempPtr);
	}
}


void display(const vector<shared_ptr<Test>> & vec)
{
	cout << "\nDisplaying Vector Data" << endl;
	cout << "==============================================" << endl;
	for (const auto &vPtr : vec)
	{
		cout << vPtr->getData() << endl;
	}
	cout << "==============================================" << endl;

}