#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(int ammount)
{
	credit(ammount);
}

bool Account::credit(int ammount) 
{
	if(ammount < 0)
		return debit(-ammount);

	balance += ammount;
	return true;
}

bool Account::debit( int ammount )
{

	if(ammount < 0) return credit(-ammount);

	if((balance - ammount) < 0) {
		cout << "Insufficient funds!!" << endl;
		return false;
	}

	balance -= ammount;
	return true;
}

int Account::getBalance() 
{
	return balance;
}