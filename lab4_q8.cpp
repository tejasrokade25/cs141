//include the library
#include <iostream>
using namespace std;
// write the function
int main(){
// declaring the variables
float a,b,c,d,e , total , average , percentage;
// assigning the values to the variables
cout << " how many marks in subject a ?";
cin >> a;
cout << " how many marks in subject b ?";
cin >> b;
cout << " how many marks in subject c ?";
cin >> c;
cout<< " how many marks in subject d? ";
cin>> d;
cout << " how many marks in subject e? "; 
cin >>e;
// calculating total
total= a+b+c+d+e;
cout << " total marks in all subject " << total;
// calculating average
average = total/5;
cout << " average marks are " << average;
//calculating percentage
percentage = (total/500) *100 ;
cout << " percentage is " << percentage;
} 
