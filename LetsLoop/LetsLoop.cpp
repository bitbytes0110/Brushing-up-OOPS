// LetsLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::cout << "lets loop !\n"; 
	int result{ 0 }, mul{ 1 };
	vector <int> vec = { 2,4,6,8 };

	for (int i{ 0 }; i < vec.size() - 1; ++i)
	{
		for (int j{ i + 1 }; j < vec.size(); ++j)
		{
			mul = vec.at(i)*vec.at(j);
			cout<< vec.at(i)<<" * "<<vec.at(j)<<" \t="<<mul<<endl;
			result += mul;
		}
	}

	cout << "\n\nResult = " << result<<endl;

	//----WRITE YOUR CODE ABOVE THIS LINE----
	//----DO NOT MODIFY THE CODE BELOW THIS LINE----
	return result;
}

