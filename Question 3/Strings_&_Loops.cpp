// It reverses a string without using built-in library functions.

#include <iostream>
using namespace std;

int main() 
{
    char input[100], reversed[100]; 
    int length = 0, i, j;


    cout << "Enter any words or wordd: ";
    cin.getline(input, 100);

  
    while (input[length] != '\0') 
	{
        length++;
    }

    
    i = length - 1;
    j = 0;
    
    while (i >= 0) 
	{
        reversed[j] = input[i];
        i--;
        j++;
    }
    reversed[j] = '\0';

    
    cout << "The word u entered: " <<input<<endl;
    cout << "Rev word: "<<reversed<<endl;

    return 0;
}
