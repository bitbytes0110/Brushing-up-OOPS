#pragma once
#include <vector>
#include <iostream>

#include "Movie.h"


using namespace std;

class Movies
{
private:
	vector<Movie> *MoviesVector;
public:
	vector<Movie> *getMovies() { return MoviesVector; }
	bool addMovie(string name, string rating, int nwatched);
	bool incrementWatchCount(string);
	bool displayList() const;

	Movies();
	Movies(const Movies &source);	//Copy Constructor
	Movies(Movies &&source);	//Move Constructor
	~Movies();
};

