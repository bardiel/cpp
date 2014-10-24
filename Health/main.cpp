#include "HealthProfile.h"
// #include "Date.h"
#include <iostream>
#include <string>

using namespace std;

void cls()
{
	cout << string( 100, '\n' );
}

int main(int argc, char const *argv[])
{

	string name, last;
	int y, m, d, h, w;
	char g;

	cls();

	cout << "First Name: ";
	getline(cin, name);
	cout << "Last Name: ";
	getline(cin, last);

	cout << "Birth year: ";
	cin >> y;
	cout << "Birth month: ";
	cin >> m;
	cout << "Birth day: ";
	cin >> y;

	cout << y;

	bool loop;
	do
	{
		loop = true;
		cout << "Gender [m/f]: ";
		cin >> g;
		if(g == 'm' || g == 'f') loop = false;
		cout << endl;
	} while(loop == true);

	cout << "Height: ";
	cin >> h;
	cout << "Weight: ";
	cin >> w;

	HealthProfile userProfile(name, last, g, y, m, d, h, w);

	userProfile.displayBMITable();

	cout << "Target heart rate between " << userProfile.getMinTargetHeartRate() << " and " << userProfile.getMaxTargetHeartRate() << " BPM." << endl;

	return 0;
}