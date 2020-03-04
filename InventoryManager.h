#pragma once
#include <istream>
#include "HashTable.h"
#include "TransactionFactory.h"
#include "Customer.h"

using namespace std;

class InventoryManager
{
public:
	void buildMovie(ifstream& infile);
	void buildCustomer(ifstream& infile);
	void processTranactions(ifstream& infile);

private:
	HashTable customerHash;
	HashTable movieTable;
};

