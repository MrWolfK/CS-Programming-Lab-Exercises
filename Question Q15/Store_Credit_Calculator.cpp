// Description: Calculates the new balance for a store account and determines if the credit limit is exceeded.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float cred=0, Sbal=0, total1=0,total2=0, charges=0, acc, limit=0, bal;
	cout<<"~~~~~~~~~~ WELCOME TO YOUR DEPARTMENTAL Store Account ~~~~~~~~~~\n\n";
	
	while ( acc != -1) {
	
	cout<<"\n\nEnter your account No. (-1 to quit): ";
	cin>>acc;
	cout<<endl;
	if (acc == -1) {
			break;
		}
		cout<<"Enter your account's Beginning balance: ";
		cin>>Sbal;
		cout<<endl;
		cout<<"Enter total charges: ";
		cin>>charges;
		cout<<endl;
		cout<<"Enter total credits you paid off: ";
		cin>>cred; cout<<endl;
		cout<<"Enter your credit limit: ";
		cin>>limit;
		cout<<endl<<endl;
		
		
		total1 = Sbal + charges;
		total2 = total1 - cred;
		
		cout<<"New Balance: "<<setw(15)<<total2;
		cout<<"\nAccount No. :"<<setw(15)<<acc
			<<"\nCredit Limit:"<<setw(15)<<limit
			<<"\nBalance to pay:"<<setw(13)<<total2;
		if (total2>limit)
		{
			cout<<"\nCredit Limit Exceeded";
		}
			
	}
	
}
