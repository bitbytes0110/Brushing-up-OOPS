// MovieFanatics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Movies.h"

using namespace std;

bool addMovie(Movies &myList, Movie myMovie)
{
	return myList.addMovie(myMovie);
}

bool incrementWatched(Movies &myList, string movieName)
{
	return myList.incrementWatchCount(movieName);
}

int main()
{
	Movies myWatchedMovies;
    cout << "Welcome to Movie Fanatics!\n"; 
	
	myWatchedMovies.displayList();

	/*addMovie(myWatchedMovies, Movie{ "Petta", "PG-13", 0 });
	addMovie(myWatchedMovies, Movie{"Kaala", "PG-13", 1 });
	addMovie(myWatchedMovies, Movie{"Maari", "A", 4 });
	addMovie(myWatchedMovies, Movie{"Maari 2", "A++", 2 });
	addMovie(myWatchedMovies, Movie{ "Kaala", "PG-13", 1 });
	
	myWatchedMovies.displayList();


	incrementWatched(myWatchedMovies, "Maari 2");
	incrementWatched(myWatchedMovies, "Maari 3");
	
	myWatchedMovies.displayList();
	*/

	addMovie(myWatchedMovies, Movie{ "Big", "PG-13",2 });
	addMovie(myWatchedMovies, Movie{ "Star Wars", "PG",5 });
	addMovie(myWatchedMovies, Movie{ "Cindrella", "PG",7 });

	myWatchedMovies.displayList();

	addMovie(myWatchedMovies, Movie{ "Cindrella", "PG",7 });
	addMovie(myWatchedMovies, Movie{ "Ice Age", "PG",12 });

	myWatchedMovies.displayList();


	incrementWatched(myWatchedMovies, "Big");
	incrementWatched(myWatchedMovies, "Ice Age");

	myWatchedMovies.displayList();

	incrementWatched(myWatchedMovies, "XXX");

	return 0;

}


