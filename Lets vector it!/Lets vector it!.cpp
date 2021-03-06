// Lets vector it!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<vector>

using namespace std;

int main()
{
	cout << "Lets vector it!\n";
	vector<int> vector1, vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "Vector1 elements :\n";
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	cout << "\nvector1 size : " << vector1.size() << endl;


	vector2.push_back(100);
	vector2.push_back(200);

	cout << "Vector2 elements :\n";
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;

	cout << "\nvector2 size : " << vector2.size() << endl;


	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	

	cout << "Vector2D elements :\n";
	cout << vector_2d.at(0).at(0)<<"\t"<< vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;

	cout << "\nvector2D size : " << vector_2d.size() << endl;

	vector1.at(0) = 1000;


	cout << "Vector2D elements :\n";
	cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;

	cout << "\nvector2D size : " << vector_2d.size() << endl;

	cout << "Vector1 elements :\n";
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	cout << "\nvector1 size : " << vector1.size() << endl;

    

}

