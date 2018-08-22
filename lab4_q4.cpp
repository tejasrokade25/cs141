//include library
#include <iostream>
using namespace std;
// write the function
int main(){
//declaring variables
int days , years , weeks , daysleft1 , daysleft2;
cout <<  "how many days u want to convert " ;
cin >> days;
// defining variables
years = days/365;
daysleft1 = days%365;
weeks = daysleft1/7;
daysleft2 = weeks%7;
//output
cout << days << " is equal to "<< years << " years , "<< weeks << " weeks and " << daysleft2 << " days";
}  
