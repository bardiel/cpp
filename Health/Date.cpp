#include "Date.h"
#include <iostream>

using namespace std;

bool Date::setDay(int d) 
{
	bool ok = true;
	if(d > 31)
		ok = false;

	if(d < 0)
		ok = false;

	if(ok == false)
		d = 1;

	day = d;
	return ok;
}

bool Date::setMonth(int m)
{
	bool ok = true;
	if(m > 12)
		ok = false;

	if(m < 0)
		ok = false;

	if(ok == false)
		m = 1;

	month = m;
	return ok;
}

bool Date::setYear(int y) 
{
	year = y;
	return true;
}

int Date::getDay()	{ return day;	}
int Date::getMonth(){ return month; }
int Date::getYear()	{ return year;	}

void Date::displayDate() 
{
	cout << getYear() << "-" << getMonth() << "-" << getDay() << endl;
}