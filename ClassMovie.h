#pragma once
#include <string>
#include "Movie.h"

using namespace std;

class ClassMovie : public Movie
{
public:
	string majorActor();
	int releaseMonth();

private:
	int releaseMonth;
	string majorActor;
};

