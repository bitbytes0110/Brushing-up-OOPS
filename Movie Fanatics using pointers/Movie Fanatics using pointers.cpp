// MovieFanatics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Movies.h"

using namespace std;

bool addMovie(Movies &myList, string name, string rating, int nwatched)
{
	return myList.addMovie(name, rating, nwatched);
}

bool incrementWatched(Movies &myList, string movieName)
{
	return myList.incrementWatchCount(movieName);
}

bool displayList(Movies myList)
{
	return myList.displayList();
}

int main()
{
	Movies myWatchedMovies;
	cout << "Welcome to Movie Fanatics!\n";

	displayList(myWatchedMovies);

	addMovie(myWatchedMovies, "Big", "PG-13", 2);
	addMovie(myWatchedMovies, "Star Wars", "PG",5 );
	addMovie(myWatchedMovies, "Cindrella", "PG",7 );

	displayList(myWatchedMovies);

	addMovie(myWatchedMovies, "Cindrella", "PG",7 );
	addMovie(myWatchedMovies,  "Ice Age", "PG",12 );

	displayList(myWatchedMovies);

	Movies yourWatchedMovies{ move(myWatchedMovies) };

	incrementWatched(yourWatchedMovies, "Big");
	incrementWatched(yourWatchedMovies, "Ice Age");

	displayList(yourWatchedMovies);

	incrementWatched(yourWatchedMovies, "XXX");

	
	return 0;

}


