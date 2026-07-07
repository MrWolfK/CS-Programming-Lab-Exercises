// Description: Calculates the Greatest Common Divisor (GCD/HCF) of three user-inputted numbers using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int gcd, i, malik, m, ahmed ;  // malik = n1, m=n2 , ahmed = n3
    
    cout<<"Enter first number: ";
    cin>>malik;
    cout<<endl;
    cout<<"Enter 2nd number: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter 3rd number: ";
    cin>>ahmed;
    cout<<endl;
    
    for(i=1; i<= malik && i <= m && i<= ahmed; i++)
    		{
    			if ( malik%i==0 && m%i==0 && ahmed%i==0)
    				{
    					gcd=i;
					}
			}
			
			cout<<"The GCD/HCF is: "<<gcd;
}
