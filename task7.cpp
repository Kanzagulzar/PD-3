#include <iostream>
using namespace std;
main(){
string moviename;
float adultprice;
float childprice;
float childsold;
float adultsold;
float earn;
float donate;
float totalearn;
cout << " Enter movie name: " ;
cin >> moviename;
cout << "Enter Adult ticket sold: " ;
cin >> adultsold;
cout << " Enter child ticket sold: ";
cin >> childsold;
cout << " Adult Ticket price " ;
cin >> adultprice;
cout << " Child Ticket price ";
cin >> childprice;
earn = ( adultsold * adultprice ) + ( childsold + childprice ) ;
donate = ( earn * 10 ) / 100 ;
totalearn = earn - donate ;
cout << " earn " << earn ;
cout << "donate " << donate ;
cout << " totalearn " << totalearn ;
}