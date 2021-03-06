// NumberOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <climits>

using namespace std;


void displayMenu();
char getSelection();
bool processInput(char input, vector<int> &vec);
void printNumbers(const vector<int> &vec);
void addNumber(vector<int> &vec);
void meanNumbers(const vector<int> &vec);
void largestNumber(const vector<int> &vec);
void smallestNumber(const vector<int> &vec);
void findNumber(const vector<int> &vec);


char getSelection()
{
	char inputChar{};
	cout << "\nEnter your choice : ";
	cin >> inputChar;
	return toupper(inputChar);
}


int main()
{

	int mean{ 0 };
	vector<int> vec{ 2,4,6,8,10 };

	std::cout << "Lets operate number \n\n";

	bool result{ false };
	do
	{
		displayMenu();

		
		result = processInput(getSelection(), vec);

	} while (result);


	cout << "Goodbye" << endl;
}

void displayMenu()
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
}


bool processInput(char inputChar, vector<int> &vec)
{
	bool retry{ false };
	
	switch (inputChar)
	{
	case 'A':
		addNumber(vec);
		retry = true;
		break;
	case'P':
		printNumbers(vec);
		retry = true;
		break;
	case 'M':
		meanNumbers(vec);
		retry = true;
		break;
	case 'L':
		largestNumber(vec);
		retry = true;
		break;
	case 'S':
		smallestNumber(vec);
		retry = true;
		break;
	case 'F':
		findNumber(vec);
		retry = true;
		break;
	case 'C':
		vec.clear();
		cout << "List is cleared - Its empty now!";
		retry = true;
		break;
	case 'Q':
		retry = false;
		break;
	default:
		cout << "Unknown selection, Please try again";
		retry = true;
	}
	return retry;
}

void printNumbers(const vector<int> &vec)
{
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
}

void addNumber(vector<int> &vec)
{
		int newNum{ };
		cout << "Add a number to enter : ";
		cin >> newNum;
		vec.push_back(newNum);
		cout << newNum << " added" << endl;
		cout << "Duplicate list entries are OK" << endl;
		printNumbers(vec);
}

void meanNumbers(const vector<int> &vec)
{
	int sum{};

	if (vec.size() == 0 )
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
}


void largestNumber(const vector<int> &vec)
{
	if (vec.size() == 0)
	{
		cout << "unable to determine the largest number- list is empty";
	}
	else
	{
		int largestNum{ 0 };
		for (auto i : vec)
		{
			if (i >= largestNum)
			{
				largestNum = i;
			}
		}
		cout << "Largest number : " << largestNum;
	}
}



void smallestNumber(const vector<int> &vec)
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
}

void findNumber(const vector<int> &vec)
{
	int findNum{ 0 }, count{ 0 };
	cout << "Enter the number to be searched : ";
	cin >> findNum;
	for (auto i : vec)
	{
		if (findNum == i)
		{
			count += 1;
		}
	}
	if (count)
		cout << "The number was found " << count << " time(s)" << endl;
	else
		cout << "Sorry, the number was NOT found" << endl;
}

