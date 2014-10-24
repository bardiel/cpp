using namespace std;

class Date
{
public:	
	bool setDay(int);
	bool setMonth(int);
	bool setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	int getField(char);
	void displayDate();
private:
	int day;
	int month;
	int year;
};