#pragma once

using namespace std;

class TransactionFactory
{
public:
	TransactionFactory createTransaction();

private:
	char transactionType;
	int customerID;
	char media = 'D';
};

