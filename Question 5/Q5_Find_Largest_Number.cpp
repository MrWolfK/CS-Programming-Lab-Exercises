//Finds the largest number among 4 inputs using nested if-else.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, L;
	cout<<"Enter First Num To Find the Largest Number: ";
	cin>>num1;
	cout<<endl<<"Enter Second Num: ";
	cin>>num2;
	cout<<endl<<"Enter Third Num: ";
	cin>>num3;
	cout<<endl<<"Enter Fourth Num: ";
	cin>>num4;
	
	
	
		if (num1>num2)  
			{
				if(num1>num3)
				{
					if (num1>num4)
					{
						L = num1;
					}
					else 
					{
						L = num4;
					}
				}
				else
				{
					if(num3>num4)
					{
						L = num3;
					}
					else
					{
						L = num4;
					}
				}
			}
		else 
			if (num2>num3)
			{
				if(num2>num4)
				{
					L = num2;
				}
				else
				{
					L = num4;
				}
			}
			else
			{
				if (num3>num4)
				{
					L = num3;
				}
				else
				{
					L = num4;
				}
			}
	cout<<endl<<"Largest Number is: "<<L;		
}
