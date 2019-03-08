#pragma once

#include<iostream>
using namespace std;



class MyString
{
	friend ostream &operator<<(ostream &os, const MyString &obj);
private:
	char *str;	// pointer to a char[] that holds a C- style string
public:
	MyString();									// No-args constructor
	MyString(const char *s);					// Overloaded constructor
	MyString(const MyString &source);			// Copy constructor
	MyString(MyString &&source);				// Move constructor
	~MyString();								// Destructor

	

	MyString &operator=(const MyString &rhs);	//Copy assignment
	MyString &operator=(MyString &&rhs);		//Move assignment

	MyString &operator-() const;
	bool operator==(const MyString &rhs)const;
	bool operator!=(const MyString &rhs)const;
	bool operator<(const MyString &rhs)const;
	bool operator>(const MyString &rhs)const;
	MyString& operator+(const MyString &rhs);
	MyString& operator+=(const MyString &rhs);
	MyString& operator*(int mul);
	MyString& operator*=(int mul);
	MyString& operator++();
	MyString& operator++(int);
	

};


