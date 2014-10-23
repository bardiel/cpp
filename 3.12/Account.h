#include <string>

using namespace std;

class Account
{
public:
	Account(int);
	bool credit(int);
	bool debit(int);
	int getBalance();
private:
	int balance = 0;
};