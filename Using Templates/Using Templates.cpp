// Using Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

template < class T >
T getMax(T a, T b)
{
	return (a>b?a:b);
}

void letsFormat()
{

	int num{ 255 };


	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;

	cout << showbase;
	cout << uppercase;

	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;

	cout << --num << endl;
	cout << --num << endl;
	cout << --num << endl;
	cout << --num << endl;
	cout << --num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
	cout << ++num << endl;
}

void usingTemplates()
{
	std::cout << "Using Templates !\n";
	int i = 5, j = 6, k;
	long l = 10, m = 5, n;
	k = getMax(i, j);
	n = getMax(l, m);
	cout << k << endl;
	cout << n << endl;
}



class Katter;

class numbers 
{
public:
	numbers() :myNum(23)
	{
		numCount++;
	}
	~numbers()
	{
		numCount--;
	}
	
	friend class Katter;
	static int numCount;
private:
	static void displaySomething();
	int myNum;
};

int numbers::numCount = 0;
class Katter
{

public:
	int myMethod(numbers myNum);

};
int Katter::myMethod(numbers myNum)
{
	numbers::displaySomething();
	
	cout<<"myNum : "<< myNum.myNum;	// Accessing private variables through friend functions
	cout << "No of objects created : " << numbers::numCount;// Accessing static variables through friend functions

	return 5;
}

void numbers::displaySomething()
{
	cout << "\nPoda poda"<<endl;
}

int main()
{

	//letsFormat();
	//usingTemplates();

	Katter myKatter;
	numbers myNumbers;
	numbers myNumbers2;
	numbers myNumbers3;
	numbers myNumbers4;

	
	myKatter.myMethod(myNumbers);


	return 0;
}



