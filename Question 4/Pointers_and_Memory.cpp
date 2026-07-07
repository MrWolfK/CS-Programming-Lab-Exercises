//It demonstrates swapping variable values using pointers.

#include <iostream>
using namespace std;

int main() {
   
    int countA = 50, countB = 75, temp;  int *pA, *pB; 
  	pA = &countA;             
    pB = &countB;            

    cout << "Warehouse stock levels before changes:\n";
    cout << "Stock A: " << countA << endl;
    cout << "Stock B: " << countB << endl;

  
    temp = *pA;  
    *pA = *pB;  
    *pB = temp;   

    cout <<endl<<"after swapping:";
    cout << "Stock A: " << countA << endl;
    cout << "Stock B: " << countB << endl;

  
    *pA = *pA + 5;

  
    cout << "after increase stock A by fivee:"<<endl<<endl;
    cout << "Stock A: " << countA << endl;
    cout << "Stock B: " << countB << endl;

    return 0;
}
