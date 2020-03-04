#pragma once
#include "TransactionFactory.h"
#include <string>

using namespace std;

class Return : public TransactionFactory
{
public:
	Return();
	void changeInventory();

private:
	string genre;
	string title;
	string actor;
	int releaseYear;
	int releaseMonth;
};

