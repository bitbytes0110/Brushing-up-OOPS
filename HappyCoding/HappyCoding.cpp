// HappyCoding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


void func_a();
void func_b();
void func_c();

void func_a() {
	std::cout << "Starting func_a" << std::endl;
	func_b();
	throw 3000;
	std::cout << "Ending func_a" << std::endl;
}

void func_b() {

	std::cout << "Starting func_b" << std::endl;
	func_c();
	throw 2000;

	std::cout << "Ending func_b" << std::endl;
}

void func_c() {
	std::cout << "Starting func_c" << std::endl;
	throw 1000;
	std::cout << "Ending func_c" << std::endl;
}



int main()
{


	cout << "Hello World!\n";

	double num{ 1234.5678 };

	cout << num << endl;

	int myArr[5] = {12,13,14,15,16};
	cout << "Sizeof : " << sizeof(myArr)<<endl;

	long long peopleOnEarth{ 760'000'000'000 }; //c++ 14!

	cout<<"There are "<<peopleOnEarth << " people on Earth!\n";

	cout << endl;

/*	enum padam {sarkar, theri, bairava, thuppaki, kathi, sachein };

	padam movieToFind{ sarkar };

	switch (movieToFind)
	{
	case sarkar: cout << "Therila innum padam paakala"<<endl;
		//break;
	case theri: cout << "Padam theri babyy!!" << endl;
		//break;
	case bairava: cout << "uvvaaaaw!!" << endl;
		//break;
	case thuppaki: cout << "Padam gun maari iruku	" << endl;
		//break;
	case kathi: cout << "Padam kathi maari sharp ah iruku" << endl;
		//break;
	default:cout << "Thalapathy padam ellame super" << endl;
	}

	*/

	/*for (int i{ 1 }; i <= 100; i++)
		cout<<i<<((i % 10 == 0) ? "\n" : " ");
	return 0;*/

/*	for (auto c : "Batman")
	{
		cout << c << endl;
	}
	*/




		try {
			func_a();
		}
		catch (int &ex) {
			std::cerr << "Caught error thrown: " << ex << std::endl;
		}
		std::cout << "Continuing in main" << std::endl;
		return 0;
}

