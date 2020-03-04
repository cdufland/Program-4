#pragma once
#include <string>

using namespace std;

class Customer
{
public:
	int getID();
	void setID(int ID);
	void addTransaction();
	void displayHistory();

private:
	int ID;
	string lastName;
	string firstName;
	//transaction[] transactionHistory;
};

