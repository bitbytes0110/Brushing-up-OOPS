// String++ (overloading using member functions).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include"MyString.h"

using namespace std;





int main()
{
    cout << "String++ "; 
	MyString movie1;
	movie1 = MyString("2.0");
	MyString movie2("Petta");
	MyString movie3(movie2);
	movie1 = movie2;
	movie3 = "KOCHADAIYAAN";
	
   	movie3 = -movie3;
	if (movie1 == movie2)
		cout << movie1 << " and " << movie2 << " are the same!" << endl;
	if (movie3 != movie2)
		cout << movie3 << " and " << movie2 << " are NOT the same!" << endl;
	if (movie3 > movie2)
		cout << movie2 << " is less than " << movie3 << " !" << endl;
	else
	cout << movie3 << " is less than " << movie2 << " !" << endl;

	movie2 = movie2 + " ";
	movie2 += movie3;

	movie1 = movie1 * 3;

	cout << "Movies : " << movie1 << ", " << movie2 << ", " << movie3 << endl;

	movie2 = movie1++;


	cout << "Movies : " << movie1 << ", " << movie2 << ", " << movie3 << endl;

	return 0;
}

