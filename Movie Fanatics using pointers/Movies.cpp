#include "pch.h"
#include "Movies.h"

Movies::Movies()						//Constructor
{
	MoviesVector = new vector<Movie>;
}

Movies::Movies(const Movies &source)	//Copy Constructor
{
	cout << "This is Movies - copy constructor !" << endl;
	MoviesVector = new vector<Movie>;

	for (const auto &m : (*source.MoviesVector))
	{
		addMovie(m.getName(), m.getRating(), m.getNTimesWatched());
	}
}

Movies::Movies(Movies &&source)			//Move Constructor	
{
	cout << "This is Movies - Move constructor !" << endl;
	MoviesVector = new vector<Movie>;

	for (const auto &m : (*source.MoviesVector))
	{
		addMovie(m.getName(), m.getRating(), m.getNTimesWatched());
	}
	source.MoviesVector = nullptr;
}

bool Movies::addMovie(string name, string rating, int nwatched)
{
	for (const Movie &currentMovie : *MoviesVector)
	{
		if (name == currentMovie.getName())
		{
			cout << name<< " already present in the list" << endl;
			return false;
		}
	}

	Movie *temp = new Movie(name, rating, nwatched);
	MoviesVector->push_back(*temp);

	cout << name << " added" << endl;
	return true;
}

bool Movies::incrementWatchCount(string myMovie)
{
	for (Movie &currentMovie : *MoviesVector)
	{
		if (currentMovie.getName() == myMovie)
		{
			currentMovie.incrementWatchTime();
			cout << "Successfully incremented watch times of " << myMovie << endl;
			return true;
		}
	}
	cout << myMovie << " not in the list!" << endl;
	return false;
}

bool Movies::displayList() const
{
	if (MoviesVector->size() != 0)
	{
		cout << endl;
		cout << "================================================================" << endl;
		cout << "\t\t\tMOVIES LIST " << endl;
		cout << "================================================================" << endl;

		for (const Movie &currentMovie : *MoviesVector)
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
	delete MoviesVector;
	cout << "Movie destructor called!" << endl;
}
