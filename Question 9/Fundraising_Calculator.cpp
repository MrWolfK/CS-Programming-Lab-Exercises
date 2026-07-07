// Description: A fundraising calculator using a while loop to determine student contributions based on laps completed.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 	float rate, contribution, total = 0, laps, regAmount, xtraLaps=1, xtraAmount;    
    cout << "~~~~~~~~~~ FUNDRAISING CALCULATOR ~~~~~~~~~~\n\n";
    cout<<"Enter Laps Completed (-1 to Quit): ";
    cin>>laps;
    cout << fixed << setprecision(2);
    while (laps != -1)
    {
    	cout<<"\nEnter sponsered rate: ";
    	cin>>rate; cout<<endl;
    	
    		if (laps <= 40)
    			{
    				contribution = rate*laps;
				}
    		else
    			{
    				regAmount = 40*rate;
    				xtraLaps = laps - 40;
    				xtraAmount  = xtraLaps * ( rate * 1.5 );
    				contribution = regAmount + xtraAmount;
				}
			total = total + contribution;
			
			cout<<"Student Contribution: "<<contribution<<endl;
			
			cout<<"Enter Laps Completed (-1 to Quit): ";
    		cin>>laps;
			
	}
	
		cout<<"Total Funds: "<<total;
}
