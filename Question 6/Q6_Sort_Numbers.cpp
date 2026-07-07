//Sorts 5 numbers in ascending order using if-else if statements.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5, S, SecSmallest, Mid, SecLargest, L;
	
	cout<<"Enter First Num To Sort in Ascending Order: ";
	cin>>num1;
	cout<<endl<<"Enter Second Num: ";
	cin>>num2;
	cout<<endl<<"Enter Third Num: ";
	cin>>num3;
	cout<<endl<<"Enter Fourth Num: ";
	cin>>num4;
	cout<<endl<<"Enter Fifth Num: ";
	cin>>num5;

	
		if( ( num1 <= num2 && num1 <= num3 ) && ( num1 <= num4 && num1 <= num5) ) 
			{
				S = num1;
			}
			else if ( ( num2 <= num1 && num2 <= num3) && ( num2 <= num4 && num2 <= num5) )
			{
				S = num2;
			}
			else if ( ( num3 <= num1 && num3 <= num2) && ( num3 <= num4 && num3 <= num5) )
			{
				S = num3;
			}
			else if ( ( num4 <= num1 && num4 <= num2) && ( num4 <= num3 && num4 <= num5) )
			{
				S = num4;
			}
		else 
			{
				S = num5;
			}	
		
			if( ( num1 >= num2 && num1 >= num3 ) && ( num1 >= num4 && num1 >= num5) ) 
			{
				L = num1;
			}
			else if( ( num2 >= num1 && num2 >= num3 ) && ( num2 >= num4 && num2 >= num5) ) 
			{
				L = num2;
			}		
			else if( ( num3 >= num1 && num3 >= num2 ) && ( num3 >= num4 && num3 >= num5) ) 
			{
				L = num3;
			}
			else if( ( num4 >= num1 && num4 >= num2 ) && ( num4 >= num3 && num4 >= num5) ) 
			{
				L = num4;
			}
		else
			{
				L = num5;	
			}	
	      
	    SecSmallest = L; 
	    
	
    if (num1 != S && num1 < SecSmallest) SecSmallest = num1;
    if (num2 != S && num2 < SecSmallest) SecSmallest = num2;
    if (num3 != S && num3 < SecSmallest) SecSmallest = num3;
    if (num4 != S && num4 < SecSmallest) SecSmallest = num4;
    if (num5 != S && num5 < SecSmallest) SecSmallest = num5;

    	
    	
  		SecLargest = S; 

			if (num1 != L && num1 > SecLargest) 
				{
    SecLargest = num1;
				}

			if (num2 != L && num2 > SecLargest) 
				{
    SecLargest = num2;
				}

			if (num3 != L && num3 > SecLargest) 
				{
    SecLargest = num3;
				}

			if (num4 != L && num4 > SecLargest) 
				{
    SecLargest = num4;
				}

			if (num5 != L && num5 > SecLargest) 
				{
    SecLargest = num5;
				}


    if ( ( num1 != S && num1 != SecSmallest ) && ( num1 != SecLargest && num1 != L )	)
        {
        	Mid = num1;
		}
    else if ( ( num2 != S && num2 != SecSmallest ) && ( num2 != SecLargest && num2 != L ) )
        {
        	Mid = num2;
		}
    else if ( ( num3 != S && num3 != SecSmallest ) && ( num3 != SecLargest && num3 != L ) )
        {
        	Mid = num3;
		}
    else if ( ( num4 != S && num4 != SecSmallest ) && ( num4 != SecLargest && num4 != L ) )
        {
        	Mid = num4;
		}
    else
        {
        	Mid = num5;
		}

    
    cout << "Numbers in Ascending Order:\n";
    cout << S << endl;
    cout << SecSmallest << endl;
    cout << Mid << endl;
    cout << SecLargest << endl;
    cout << L << endl;

 
}
