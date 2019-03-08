// Cstrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;
 
int main()
{
    std::cout << "Yes, Strings attached\n"; 

	char first_name[]{ "Bjarne" };
	char last_name[]{ "Stroustrup" };
	char whole_name[20];

	
	size_t first_name_length = strlen(first_name);
	size_t last_name_length = strlen(last_name);
	
	strcpy_s(whole_name, first_name);
	strcat_s(whole_name, last_name);
	
	size_t whole_name_length = strlen(whole_name);
	
	cout << "Full name : " << whole_name;

//	cout << "Please enter your first name : ";
//	cin >> first_name;
}
