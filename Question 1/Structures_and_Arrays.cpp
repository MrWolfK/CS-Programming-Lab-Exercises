//It is a program to manage customer data using an array of structures.
#include <iostream>
using namespace std;
	
struct customer
	{
		int id;	
		float bal;
		string name;
	};
	
int main()
	{
		customer customers[10];
		int i;
	
			for(i=0;i<10;i++)
				{
					cout<<"\nEnter Your Name: "; cin.ignore();
					getline(cin, customers[i].name);
					

					cout<<endl<<"Enter your ID: ";
					cin>>customers[i].id;
					
					cout<<"\nEnter your Balance ";
					cin>>customers[i].bal;
				}
		
		for(i=0;i<10;i++)
			{
				cout<<"================="<<endl;
				cout<<"Customer Name: "<<customers[i].name<<endl;
				cout<<"Customer ID: "<<customers[i].id<<endl;
				cout<<"Customer Balance: "<<customers[i].id<<endl;
			}
		
	}
