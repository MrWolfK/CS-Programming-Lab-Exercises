//Calculates quarter water bills using conditional logic.

#include <iostream>

using namespace std;

int main()
{
	int Q1, Q2, Q3, Q4, avg, sum;
	
	cout<<"Enter the Bill of First 3 Months or Quarter 1: ";
	cin>>Q1;
	cout<<endl<<"Enter the Bill of NExt 3 Months or Quarter 2: ";
	cin>>Q2;
	cout<<endl<<"Enter the Bill of Next 3 Months or Quarter 3: ";
	cin>>Q3;
	cout<<endl<<"Enter the Bill of Next 3 Months or Quarter 4: ";
	cin>>Q4;
	
	sum = Q1+Q2+Q3+Q4;
	avg=sum/12;
	
	cout<<endl<<endl<<"The Average Monthly Bill is: "<<avg<<endl<<endl;
	
		if (avg > 75)
			{
				cout<<"Too Much Water is Being Used, Try to Save as much as you can. :D ";
			}
		else if (avg >= 25 && avg <=75)
			{
				cout<<"Typical amount of Water have been used. Good Work";
			}
		else
			{
				cout<<"Great Job on Saving Water";
			}
	
}
