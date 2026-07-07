// Description: Reverses a number to check if it is a palindrome, while counting and summing its digits.

#include <iostream>
using namespace std;
int main()
{
       long long ahmad, awan, BSCS_13984 = 0, count = 0, sum = 0, digit =0; // ahmad = num , awan = temporary variable , reverse = BSCS_13984
    cout << "Enter a number: ";
    cin >> ahmad;
	cout<<endl<<endl;
    awan = ahmad;
    if (awan == 0) 
	{
	count = 1; 
	}

    while (awan > 0) 
	{
        digit = awan % 10;
        BSCS_13984 = BSCS_13984 * 10 + digit;
        sum = sum + digit;
        count++;
        awan =  awan/ 10;
    }

    cout << "Reversed number: " << BSCS_13984 << endl<< endl;
    cout << "Number of digits: " << count << endl<< endl;
    cout << "Sum of digits: " << sum << endl<< endl;
    if (BSCS_13984 == ahmad )
       {
       	cout << "The number is a palindrome." << endl<< endl;
		} 
    else{
	
        cout << "The number is not a palindrome." << endl<< endl;
	}
	
}
