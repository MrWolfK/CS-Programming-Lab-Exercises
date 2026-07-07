// Description: A simple bank ATM simulator using a do-while loop and switch cases for deposits, withdrawals, and balance inquiries.

#include <iostream>
using namespace std;
int main()
{
    
    float dep, with;
    int bal=0 ,pin, amount=0, num;
    char y,n;
    
    cout<<"----------------------Welcome to NUML Bank Limited----------------------"<<endl<<endl;
    do {
    cout<<"Enter your pin to continue: ";
    cout<<endl<<endl;
    cin>>pin;
    cout<<"1. Deposit in account. \n2. Withdrawal from account \n3. Balance Inquiry \n \n";
    cin>>num;
        switch(num)
        {
            case 1: cout<<"Enter the amount you want to deposit: "<<endl;
                cin>>amount;
                
                bal = bal+amount;
                cout<<"Deposit success"<<endl<<endl;
                
                cout<<"Do you want to go to Main Menu? (y/n): "<<endl<<endl; cin>>y;
                break; 
                
            case 2: cout<<"Enter the amount you want to Withdrawal: "<<endl<<endl;
                cin>>amount;
                bal = bal - amount;
                cout<<"Withdrawal success:"<<endl;
                
                cout<<"Do you want to go to Main menu? (y/n): "<<endl; cin>>y;
                break;
            case 3: cout<<"Your Balance is "<<bal<<endl;
                
                cout<<"Do you want to go to Main menu? (y/n): "<<endl<<endl;
                cin>>y; break;
        }
    }
        
        
        while(y != 'n');
        {
            
                
            cin>>y;
        }

}
