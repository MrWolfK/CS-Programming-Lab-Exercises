//It calculates the sum of main and anti-diagonals in a 3x3 matrix.

#include <iostream>
using namespace std;

int main() {
  
    int matrix[3][3] = { {1,2, 3},{4,5,6}, {7,8, 9} }, MainDiag, AntiDiag, Midnum;
	

    MainDiag =matrix[0][0]+ matrix[1][1]+matrix[2][2];
    AntiDiag = matrix[0][2]+matrix[1][1] +matrix[2][0];

    Midnum = matrix[1][1];

 
    cout << "Sum of main diag: "<<MainDiag <<endl;
    cout << "Sum of anti diag:" <<AntiDiag<<endl;
    cout<<endl;
    cout << "Element in both diagonals:"<<Midnum <<endl;

    return 0;
}
