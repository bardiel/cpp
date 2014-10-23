#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

void cls()
{
	cout << string( 100, '\n' );
}


bool loop;

int main(int argc, char const *argv[])
{	
	int opt;
	Account account(22);
	cout << account.getBalance() << endl;

	account.credit(2);
	cout << account.getBalance() << endl;

	account.credit(-2);
	cout << account.getBalance() << endl;

	account.debit(10);
	cout << account.getBalance() << endl;

	account.debit(344);
	cout << account.getBalance() << endl;

	account.debit(-2);
	cout << account.getBalance() << endl;


	return 0;
}