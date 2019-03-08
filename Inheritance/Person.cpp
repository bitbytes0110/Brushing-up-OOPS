#include "pch.h"
#include "Person.h"


Person::Person()
{
	cout << "Person constructor" << endl;
}

Person::Person(int x): value(x)
{
	cout << "INT Person constructor" << endl;
}


Person::~Person()
{
	cout << "Person constructor" << endl;
}
