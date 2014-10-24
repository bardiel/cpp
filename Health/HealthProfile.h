#include "Date.h"
#include <string>

#define BMI_UNDER 		18.5
#define BMI_NORMAL_MIN	18.5
#define BMI_NORMAL_MAX	24.9
#define BMI_OVER_MIN	24.9
#define BMI_OVER_MAX	29.9
#define BMI_OBESE 		29.9

#define DEFAULT_GENDER	'f'	// upon failed validation

#define DEFAULT_HEIGHT	1	// upon failed validation
#define DEFAULT_WEIGHT	1	// upon failed validation

using namespace std;

class HealthProfile
{
public:
	HealthProfile(string fn, string ln, char g, int y, int m, int d, int h, int w);
	string getFirstName();
	string getLastName();
	char getGender();
	int getHeight();
	int getWeight();
	
	bool setFirstName(string);
	bool setLastName(string);
	bool setGender(char);
	bool setHeight(int);
	bool setWeight(int);

	int getBMI();
	int getMaximumHeartRate();
	int getMinTargetHeartRate();
	int getMaxTargetHeartRate();
	int getAge();
	void displayBMITable();
private:
	Date birthdate;
	string first_name;
	string last_name;
	char gender;
	int height;
	int weight;
};