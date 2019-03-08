#pragma once

#include <string>
#include <iostream>

using namespace std;

class Movie
{
private:
	string name;
	string rating;
	int nTimesWatched;

public:
	Movie(string name = "None", string rating = "G", int nTimesWatched = 0);

	string getName() const { return name; }
	bool setName(string name) { this->name = name; return true; }
	
	string getRating() const { return rating; }
	bool setRating(string rating) { this->rating = rating; return true; }
	
	int getNTimesWatched() const { return nTimesWatched; }
	bool setNTimesWatched(int nTimes) { this->nTimesWatched = nTimes; return true; }
	
	void incrementWatchTime();
	void display() const;

	~Movie();
};

