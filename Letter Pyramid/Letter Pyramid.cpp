// Letter Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
    cout << "Letter Pyramid"<<endl; 

	string text;
	cout << "Enter the string to be made into pyramid : ";
	getline(cin, text);

	int spaceSize = text.length()-1;
	for (size_t i = 0; i < text.length(); ++i)
	{
		cout << "\t\t\t\t\t";

		// Handle space
		for(int i =0; i<spaceSize; ++i)
		{
			cout << " ";
		}
		spaceSize--;

		string toPrint = text.substr(0, i + 1);
		cout << toPrint;


		for (int i = 1; i < toPrint.length(); ++i)
		{
			cout << toPrint.at(toPrint.length() - (i+1));
		}
		cout << endl;
	}

}
