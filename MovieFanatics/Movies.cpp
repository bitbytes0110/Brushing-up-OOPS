#include "pch.h"
#include "Movies.h"

Movies::Movies()
{
}

bool Movies::addMovie(Movie myMovie)
{
	for (const Movie &currentMovie : MoviesVector)
		{
			if (myMovie.getName() == currentMovie.getName())
			{
				cout << myMovie.getName()<<" already present in the list" << endl;
				return false;
			}
		}
	cout << myMovie.getName() << " added" << endl;
	MoviesVector.push_back(myMovie);
	return true;
}

bool Movies::incrementWatchCount(string myMovie)
{
	for (Movie &currentMovie : MoviesVector)
	{
		if (currentMovie.getName() == myMovie)
		{
			currentMovie.incrementWatchTime();
			cout << "Successfully incremented watch times of " <<myMovie<< endl;
			return true;
		}
	}
	cout << myMovie <<" not in the list!" << endl;
	return false;
}

bool Movies::displayList() const
{
	if (MoviesVector.size() != 0)
	{
		cout << endl;
		cout << "================================================================" << endl;
		cout << "\t\t\tMOVIES LIST " << endl;
		cout << "================================================================" << endl;

		for (const Movie &currentMovie : MoviesVector)
		{
			currentMovie.display();
			cout << "----------------------------------------------------------------" << endl;
		}
		cout << "================================================================" << endl;
	}
	else
	{
		cout << "Movie list empty !" << endl;
	}
	return true;
}

Movies::~Movies()
{
}
