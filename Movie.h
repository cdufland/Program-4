#pragma once
#include <string>

using namespace std;

class Movie
{
public:
	Movie createMovie(char);
	string getTitle();
	bool borrowMovie();
	bool returnMovie();
	string getDirector();
	int getYear();
	bool operator < (Movie&);
	bool operator == (Movie&);
private:
	int releaseYear;
	string director;
	string title;
};

