// Description: Calculates the Least Common Multiple (LCM) of three numbers.

#include <iostream>
using namespace std;
int main()
{
    long long greatest, i, malik, m, ahmed, prod ;  // malik = n1, m=n2 , ahmed = n3
    
    cout<<"Enter first number: ";
    cin>>malik;
    cout<<endl;
    cout<<"Enter 2nd number: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter 3rd number: ";
    cin>>ahmed;
    cout<<endl;	
    
    prod=malik*m*ahmed;
    
    greatest = (malik>m)? (malik>ahmed? malik:ahmed) : (m>ahmed? m:ahmed);
   
  
    	for(i=greatest; i>=greatest; i= i+greatest)
    		{
    			if ( ( malik==0 || i%malik ==0 )	&&	( m==0 || i%m==0 )	&&	( ahmed==0 || i%ahmed==0 ) )
    				{
    					break;
					}
			} 
			
			cout<<"LCM: "<<i; 
}
