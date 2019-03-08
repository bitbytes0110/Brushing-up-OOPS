#pragma once
#include <vector>
#include <iostream>

#include "Movie.h"


using namespace std;

class Movies
{
private:
	vector<Movie> MoviesVector;
public:
	vector<Movie> getMovies() { return MoviesVector; }
	bool addMovie(Movie);
	bool incrementWatchCount(string);
	bool displayList() const;

	Movies();
	~Movies();
};

