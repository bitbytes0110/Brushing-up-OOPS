// NumberOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    std::cout << "Lets operate number \n\n"; 

	char inputChar{};
	int sum{ 0 }, mean{ 0 };
	vector<int> vec{ 2,4,6,8,10 };
	bool retry{ false };
	do
	{
		cout << "\n\n\t\t\t\t============================================" << endl;
		cout << "\t\t\t\t\t\tMENU" << endl;
		cout << "\t\t\t\t============================================" << endl;
		cout << "\t\t\t\tP\t Print numbers" << endl;
		cout << "\t\t\t\tA\t Add a number" << endl;
		cout << "\t\t\t\tM\t Display mean of the numbers" << endl;
		cout << "\t\t\t\tS\t Display the smallest number" << endl;
		cout << "\t\t\t\tL\t Display the largest number" << endl;
		cout << "\t\t\t\tF\t Find number" << endl;
		cout << "\t\t\t\tC\t Clear list" << endl;
		cout << "\t\t\t\tQ\t Quit" << endl;

		cout << "\nEnter your choice : ";
		cin >> inputChar;

		switch (inputChar)
		{
		case 'a':
		case 'A':
		{
			int newNum{ 0 };
			cout << "Add a number to enter : ";
			cin >> newNum;
			vec.push_back(newNum);
			cout << newNum << " added"<<endl;
			cout << "Duplicate list entries are OK"<<endl;
			retry = true;
		}
		case 'p':
		case'P':

			if (vec.size() == 0)
			{
				cout << "[] The list is empty";
			}
			else
			{
				cout << "[ ";
				for (auto i : vec)
				{
					cout << i << " ";
				}
				cout << " ]";
			}
			retry = true;
			break;
		case 'm':
		case 'M':
			if (vec.size() == 0)
			{
				cout << "unable to calculate the mean- no data";
			}
			else
			{
				cout << "Mean of " << vec.size() << " numbers in the list : ";
				for (auto i : vec)
				{
					sum += i;
				}
				cout << static_cast<double>(sum) / vec.size();
			}
			retry = true;
			break;
		case 'l':
		case 'L':
		{

			if (vec.size() == 0)
			{
				cout << "unable to determine the largest number- list is empty";
			}
			else
			{
				int biggestNum{ 0 };
				for (auto i : vec)
				{
					if (i >= biggestNum)
					{
						biggestNum = i;
					}
				}
				cout << "Largest number : " << biggestNum;
			}
			retry = true;
			break;
		}
		case 's':
		case 'S':
		{
			if (vec.size() == 0)
			{
				cout << "unable to determine the smallest number- list is empty";
			}
			else
			{
				int smallestNum{ INT32_MAX };
				for (auto i : vec)
				{
					if (i <= smallestNum)
					{
						smallestNum = i;
					}
				}
				cout << "Smallest number : " << smallestNum;
			}
			retry = true;
			break;
		}
		case 'f':
		case 'F':
		{
			int findNum{ 0 }, count{ 0 };
			cout << "Enter the number to be searched : ";
			cin >> findNum;
			for(auto i: vec)
			{
				if (findNum == i)
				{
					count += 1;
				}
			}
			if(count)
				cout << "The number was found "<<count<<" time(s)"<<endl;
			else
				cout << "Sorry, the number was NOT found"<< endl;
		}
			retry = true;
			break;
		case 'c':
		case 'C':
			vec.clear();
			cout << "List is cleared - Its empty now!";
			retry = true;
			break;
		case 'q':
		case 'Q':
			retry = false;
			break;
		default:
			cout << "Unknown selection, Please try again";
			retry = true;
		}
	}while(retry);

	
	cout << "Goodbye" << endl;
}
