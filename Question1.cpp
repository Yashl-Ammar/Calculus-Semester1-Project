#include <iostream>
#include <cmath>

using namespace std;





int main()
{
	float e = 2.71828;
	float time; 
	double e_to_the_power_of_time;
	double starting_point = pow(e,0);
	double fuel;
	int rounded_fuel;
	cout << "Enter time in hours: " ;
	cin >> time;
	
	e_to_the_power_of_time = pow(e,time);
	fuel = 100 * ( e_to_the_power_of_time - starting_point );
	rounded_fuel = round(fuel);
	cout << "The fuel filled in "<< time << " is " << fuel << endl; 
	cout << "The rounded value of the fuel filled in " << time << " is " << rounded_fuel <<endl;
	
	return 0;
}	
