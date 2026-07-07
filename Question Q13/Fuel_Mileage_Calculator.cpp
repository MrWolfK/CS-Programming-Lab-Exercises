// Description: Calculates the fuel efficiency (Km/L) for individual trips and the total overall mileage.

#include <iostream>
using namespace std;
int main()
{
 		float km = 0, fuel = 0, Lt= 0, Km_thisT= 0, Km_total= 0, Lt_total= 0, ahmad= 0;
 		
 		
		 
		cout<<"Enter your km's driven: (-1 to quit): ";
		cin>>km;
		
	
		while(km != -1)
 			{
 				cout<<endl<<"Enter Liter's Used: "; cout<<endl;
 				cin>>Lt;
 				Km_thisT=km/Lt;
 				cout<<"Km/L this trip: "<<Km_thisT;
 				cout<<endl;
 				Km_total = Km_total+km;
 				Lt_total =Lt_total +Lt;
 				
 				ahmad = Km_total/Lt_total;
 				
 				cout<<"Total Km/L: "<<ahmad;
 				cout<<endl;
 				
 				cout<<"Enter your km's driven: (-1 to quit): ";
				cin>>km;
			 }
		 
}
