#include "GradeBook.h"
#include <iostream>
#include <string>

using namespace std;

GradeBook::GradeBook(string course, string inst) 
{
	setCourseName(course);

	setInstructorName(inst);
}

string GradeBook::getInstructorName() 
{
	return instructorName;
}

string GradeBook::getCourseName() 
{
	return courseName;
}

void GradeBook::setCourseName( string name ) 
{
	if(name.length() <= 25)
		courseName = name;

	if(name.length() > 25) 
	{
		courseName = name.substr(0, 25);
		cout << "WARNING! \"" << name << "\" was too long." << endl;
	}
}

void GradeBook::setInstructorName(string name) 
{
	instructorName = name;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to course: \"" << courseName << "\"" << endl
		<< "Presented by: " << instructorName << endl;
}