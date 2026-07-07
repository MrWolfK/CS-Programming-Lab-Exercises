// Prints a formatted student result card.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float total, DLD_marks, per, E1_marks, En_marks;
	cout<< "Enter Digital Logic Design Marks: ";
	cin>>DLD_marks;
	cout<<endl<< "Enter Electronics-I Marks: ";
	cin>>E1_marks;
	cout<<endl<< "Enter English Marks: ";
	cin>>En_marks;
	
	total=DLD_marks+E1_marks+En_marks;
	per=100*(total/300);
	
	
	
	
	cout <<endl<< setw(30) << "Result Card" << endl;
	cout << "Name: ABC" << setw(40) << "Reg. #: CIIT/----" << endl;
	cout << "Session: Fall-16" << setw(26) << "Semester:2" << endl<<endl;
	
	cout << "Subjects	" << setw(30) << "Total Marks" << setw(30) << "Obtained Marks"<<endl;
	cout << "Digital Logic Design" << setw(20) << "100" << setw(30) << DLD_marks <<endl;
	
	cout << "Electronics-I" << setw(27) << "100" << setw(30) << E1_marks <<endl;
	cout << "English" << setw(33) << "100" << setw(30) << En_marks <<endl;
	
	cout<<endl<<"Percentage: "<<per<<"%";
}
