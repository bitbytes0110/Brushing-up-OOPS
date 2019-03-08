#include "pch.h"
#include "Movie.h"

Movie::Movie(string name, string rating, int nTimesWatched)
	:name(name), rating(rating), nTimesWatched(nTimesWatched)
{

}

void Movie::incrementWatchTime()
{
	nTimesWatched++;
}

void Movie::display() const
{
	cout << "Name			: " << getName() << endl;
	cout << "Rating			: " << getRating() << endl;
	cout << "Times Watched	: " << getNTimesWatched() << endl;
}

Movie::~Movie()
{
}


