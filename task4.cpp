#include <iostream>
using namespace std;
main(){
string acceleration;
float accelerationoftoy;
float velocity1;
float velocity2;
float time;
cout << "Enter initial velocity: " ;
cin >> velocity1;
cout << "Enter final velocity: " ;
cin >> velocity2 ;
cout << " time " ;
cin >> time ;
acceleration = ( velocity2 - velocity1 )/ time;
cout << "Acceleration is: " << accelerationoftoy ;
}