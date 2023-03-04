#include <iostream>
using namespace std;
main(){
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
float totalmarks;
string studentname;
float percentage;
cout << " Your name is : " ;
cin>> studentname;
cout << " sub1: "  ;
cin >> sub1;
cout << " sub2: "  ;
cin >> sub2 ;
cout << " sub3: "  ;
cin >> sub3;
cout << " sub4: "  ;
cin >> sub4;
cout << " sub5: "  ;
cin >> sub5;
percentage = ( sub1 + sub2 + sub3 + sub4 + sub5 ) * 100 /500;
cout << " percentage " << percentage ;

}