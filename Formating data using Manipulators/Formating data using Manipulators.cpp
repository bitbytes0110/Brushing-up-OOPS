// Formating data using Manipulators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
	string name;
	long population;
	double cost;
};

// Assume each country has at least 1 city
struct Country {
	string name;
	vector<City> cities;
};

struct Tours {
	string title;
	vector<Country> countries;
};

int main()
{
	Tours tours
	{ "Tour Ticket Prices from Miami",
		{
			{
				"Colombia", {
					{ "Bogota", 8778000, 400.98 },
					{ "Cali", 2401000, 424.12 },
					{ "Medellin", 2464000, 350.98 },
					{ "Cartagena", 972000, 345.34 }
				},
			},
			{
				"Brazil", {
					{ "Rio De Janiero", 13500000, 567.45 },
					{ "Sao Paulo", 11310000, 975.45 },
					{ "Salvador", 18234000, 855.99 }
				},
			},
			{
				"Chile", {
					{ "Valdivia", 260000, 569.12 },
					{ "Santiago", 7040000, 520.00 }
			},
		},
			{ "Argentina", {
				{ "Buenos Aires", 3010000, 723.77 }
			}
		},
	}
	};

	// Unformatted display so you can see how to access the vector elements
	cout << tours.title << std::endl;
	for (auto country : tours.countries) 
	{   // loop through the countries
		cout << country.name << std::endl;
		for (auto city : country.cities) {       // loop through the cities for each country
			cout << "\t" << city.name
				<< "\t" << city.population
				<< "\t" << city.cost
				<< endl;
		}
	}

	//	Formatted display

	const int total_width{ 70 };
	const int field1_width{ 20 };
	const int field2_width{ 20 };
	const int field3_width{ 15 };
	const int field4_width{ 15 };

	cout << "\nFormatted display :"<<std::endl;

	for (int i = 1; i <= total_width; i++)
	{
		cout << i % 10 ;
	}
	cout << endl;
	cout << endl;

	int gap = (total_width -(tours.title.length()))/2;
	cout << setfill(' ');
	cout << setw(gap)<<""<<tours.title <<endl;
	cout << endl;

	cout	<< setw(field1_width) << left<< "Country" 
			<< setw(field2_width) <<left<< "City" 
			<< setw(field3_width)<<right << "Population" 
			<< setw(field4_width) <<right<< "Price" << endl;
	cout << setfill('-');
	cout << setw(total_width) <<""<< endl;


	cout << setfill(' ');
	for (auto country : tours.countries)
	{
		for (int i = 0 ;i<country.cities.size(); i++) 
		{       
			cout<<setw(field1_width) << left << ((i==0)?country.name:"")
				<<setw(field2_width) << left<< country.cities.at(i).name
				<< setw(field3_width) << right << country.cities.at(i).population
				<< setw(field4_width) << right <<setprecision(2)<<fixed << country.cities.at(i).cost
				<< endl;
		}
	}

	std::cout << std::endl << std::endl;
	return 0;
}