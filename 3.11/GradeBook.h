#include <string>

using namespace std;

class GradeBook
{
public:
	GradeBook(string, string);
	void setInstructorName(string);
	void setCourseName(string);
	string getInstructorName();
	string getCourseName();
	void displayMessage();
private:
	string courseName;
	string instructorName;
};