#include <iostream>
using namespace std;
main(){
int vegkilo;
int fruitkilo;
float vegcost;
float fruitcost;
float totalinrupees;
float total;
cout << "price of veg" ;
cin >> vegcost;
cout << "weight of veg" ;
cin >> vegkilo;
totalinrupees = ( vegkilo * vegcost ) + ( fruitkilo * fruitcost );
total = totalinrupees * 1.94;
cout << "total in rupees:" <<totalinrupees ;
cout << "total in coins " << total ;



}