// Array Multiplier.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void printArray(const int *const arr, size_t size);
int* apply_all(const int *const arr1 , int n1, const int *const arr2, int n2);

int main()
{
	std::cout << "Array Multiplier!\n";

	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = {10, 20, 30};

	printArray(arr1,5);
	printArray(arr2, 3);
	int *resultArr = apply_all(arr1, 5, arr2, 3);
	printArray(resultArr, 15);

	delete [] resultArr;
}


void printArray(const int *const arr, size_t size)
{

	cout << "[ ";
	for(int i = 0; i< size; i++)
	{
		cout << arr[i] <<" ";
	}
	cout << "]" << endl;
}

int* apply_all(const int *const arr1, int n1, const int *const arr2, int n2)
{

	int* newArray = new int[n1 * n2];
	
	int position = 0;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			newArray[position] = arr1[j] * arr2[i];
			++position;
		}
	}

	return newArray;
}
