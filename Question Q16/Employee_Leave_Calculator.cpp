// Description: Calculates accrued leave time for employees based on weekly hours worked.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float hours, ahmad, awan, minutes; // total = ahmad, leave = awan
	cout<<"~~~~~~~ EMPLOYEES LEAVE CALCULATOR by HOUR/Week ~~~~~~~";
	
	while ( hours != -1 )
	{
		cout<<"\n\n\nEnter the numbers of hours worked by week (-1 to Quit): ";
		cin>>hours;
		if (hours == -1)
			{
				break;
			}
			minutes = 60*hours;
			ahmad= 120 + (minutes*0.10);
			awan = ahmad/60;
			cout<<"\n	Accured Leave: "<<awan;	
	}
	
}
