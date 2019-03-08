// Virtual Cop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include"Derived.h"


void shootThis(Base* obj)
{
	obj->shoot();
}

void shootThat(Base obj)
{
	obj.shoot();
}

int main()
{
    std::cout << "Virtual cop!\n"; 
	

	Base *b1 = new Base();
	Base *b2 = new Derived();

	Base b3;
	Derived b4;


	shootThis(b1);
	shootThis(b2);
	shootThat(b3);
	shootThat(b4);
 
	
}