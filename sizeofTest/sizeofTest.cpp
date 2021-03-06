// sizeofTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


using namespace std;

int main()
{
    std::cout << "Sizeof Operator Test!\n"; 

	int vertices[] = { 1,2,3,4,5,6,7 };

	cout << "sizeof(vertices) : " << sizeof(vertices) << endl;	// Here the compiler knows that you are passing an array, so it actually calculates the size by finding out the size of 1 element and multiplies it by the number of elements
	
	int *pVertices = vertices;

	cout << "sizeof(pVertices) : " << sizeof(pVertices) << endl;	// Here the compiler knows that you are passing Pointer, so it simply finds the sizeof(integer pointer) => 4

	cout << "pVertices[0] : " << pVertices[0] << endl;	//By converting arrays to pointers you still can access each of the array element!
	cout << "pVertices[1] : " << pVertices[1] << endl;




}

