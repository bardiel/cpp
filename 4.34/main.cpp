#include <iostream>

using namespace std;

unsigned int factorial(int n) 
{
	if(n == 1) return 1;
	else return  n * factorial((n - 1));
}


double powerOf(int n, int power)
{
	bool negative	= false;
	double ret		= n;
	int current		= 1;

	if(power < 0)
	{
		power 		*= -1.0;
		negative	= true;
	}

	while(current < power) {
		ret *= (n * 1.0);
		++current;
	}

	if(negative) ret *= -1.0;

	return ret;
}

double e(int accuracy)
{
	int current = 1;
	double ret	= 1.0;

	while(current <= accuracy)
		ret += (1.0 / factorial(current++));
	
	return ret;
}


double eAtPowerOf(int accuracy, int power)
{
	double ret	= 1.0;
	int current	= 1;

	while(current <= accuracy)
		ret += (powerOf(power, current) / factorial(current++));

	return ret;
}

int main(int argc, char const *argv[])
{
	int n;

	do
	{
		cout << "Integer: ";
		cin >> n;
	} while(n <= 0);


	cout << "Factorial:\t" << factorial(n) << endl;

	cout << "e:\t\t" <<  e(n) << endl;

	cout << "e^n\t\t" << eAtPowerOf(n, n) << endl;

	return 0;
}