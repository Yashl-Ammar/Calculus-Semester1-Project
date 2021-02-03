#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double speed_in_miles_per_hour;
	cout << "Enter the speed the excelsior requires: ";
	cin >> speed_in_miles_per_hour;
	
	double speed_in_feet_per_second = speed_in_miles_per_hour*(88.0/60.0);
	double time_in_second = (pow((speed_in_feet_per_second/5.0), 0.5));
	double time_in_minutes = time_in_second/60.0;
	
	cout << "The amount of time needed for the fuel to burn to reach " << speed_in_miles_per_hour << " mph is " << time_in_minutes << " min"<< endl;
	cout << "The rounded amount of time needed for the fuel to burn to reach " << speed_in_miles_per_hour << " mph is " << round(time_in_minutes) << " min"<< endl;
	return 0;
}