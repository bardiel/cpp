#include "HealthProfile.h"
#include <string>
#include <iostream>

#define CURRENT_YEAR 2014

HealthProfile::HealthProfile(string fn, string ln, char g, int y, int m, int d, int h, int w)
{
	setFirstName(fn);
	setLastName(ln);
	setGender(g);
	birthdate.setYear(y);
	birthdate.setMonth(m);
	birthdate.setDay(d);

	setHeight(h);
	setWeight(w);
}

string 	HealthProfile::getFirstName()	{ return first_name;}
string	HealthProfile::getLastName()	{ return last_name;	}
char	HealthProfile::getGender()		{ return gender;	}
int		HealthProfile::getHeight()		{ return height;	}
int		HealthProfile::getWeight()		{ return weight;	}

bool	HealthProfile::setFirstName(string n)
{
	first_name = n;
	return true;	
}

bool	HealthProfile::setLastName(string n)
{
	last_name = n;
	return true;
}

bool	HealthProfile::setGender(char g) 
{
	bool ok = false;
	if(g == 'f')	ok	= true;
	if(g == 'm')	ok	= true;
	if(ok == false)	g	= DEFAULT_GENDER;
	gender = g;
	return ok;
}

bool	HealthProfile::setHeight(int h) 
{
	bool ok = true;
	if(h <= 0)		ok	= false;
	if(ok == false)	h	= DEFAULT_HEIGHT;
	height = h;
	return ok;
}

bool	HealthProfile::setWeight(int w) 
{
	bool ok = true;
	if(w <= 0)		ok	= false;
	if(ok == false)	w	= DEFAULT_WEIGHT;
	weight = w;
	return ok;
}

int		HealthProfile::getBMI() 
{
	return (int) (getWeight() / (getHeight() * getHeight()));
}

int		HealthProfile::getMaximumHeartRate()
{
	return 220 - getAge();
}

int		HealthProfile::getMinTargetHeartRate() 
{
	return 50 * getMaximumHeartRate() / 100;
}

int		HealthProfile::getMaxTargetHeartRate() 
{
	return 85 * getMaximumHeartRate() / 100;
}

int 	HealthProfile::getAge() 
{
	return CURRENT_YEAR - birthdate.getYear();
}

void	HealthProfile::displayBMITable() {
	cout	<< "BMI:\t\t" << getBMI() << endl << endl
		<< "Underweight:\t" << BMI_UNDER << endl
		<< "Normal:\t\tbetween " << BMI_NORMAL_MIN << " and " << BMI_NORMAL_MAX << endl
		<< "Overwoight:\tbetween " << BMI_OVER_MIN << " and " << BMI_OVER_MAX << endl
		<< "Obese:\t\tmore than " << BMI_OBESE << endl << endl;
}