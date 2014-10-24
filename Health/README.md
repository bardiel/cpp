
# Body Mass Index Calculator

The formulas for calculating BMI are

	BMI = (weightInPounds × 703) / (heightInInches × heightInInches)
	BMI = (weightInKG) / (heightInMT × heightInMT)

# 3.15: Date Class

Create a class called Date that includes three pieces of information as data members—a month (type int ), a day (type int ) and a year (type int ). Your class should have a constructor with three parameters that uses the parameters to initialize the three data members. For the purpose of this exercise, assume that the values provided for the year and day are correct, but ensure that the month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get function for each data member. 
Provide a member function displayDate that displays the month, dayand year separated by forward slashes ( / ). Write a test program that demonstrates class Date ’s capabilities

# 3.16 Target-Heart-Rate Calculator

While exercising, you can use a heart-rate monitor to see that your heart rate stays within a safe range suggested by your trainers and doctors. According to the American Heart Association (AHA) ( www.americanheart.org/presenter.jhtml?identifier=4736 ), the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years. Your target heart rate is a range that is 50–85% of your maximum heart rate.

# 3.17 Computerization of Health Records

In this exercise, you’ll design a “starter” HealthProfile class for a person. The class attributes should include the person’s first name, last name, gender, date of birth (consisting of separate attributes for the month, day and year of birth), height (in inches) and weight (in pounds). Your class should have a constructor that receives this data. For each attribute, provide set and get functions.

The class also should include functions that calculate and return the user’s age in years, maximum heart rate and target-heart-rate range and body mass index (BMI) Write an application that prompts for the person’s information, instantiates an object of class HealthProfile for that person and prints the information from that bject—including the person’s first name, last name, gender, date of birth, height and weight—then calculates and prints the person’s age in years, BMI, maximum heart rate and target-heart-rate range. It should also display the “BMI values” chart.

Since you do not yet know how to obtain the current date from the computer, function getAge should prompt the user to enter the current month, day and year before calculating the person’s age.