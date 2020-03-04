#pragma once
#include "TransactionFactory.h"
#include <string>

using namespace std;

class Borrow : public TransactionFactory
{
	Borrow();
	void changeInventory();

private:
	string genre;
	string title;
	string actor;
	int releaseYear;
	int releaseMonth;
};

