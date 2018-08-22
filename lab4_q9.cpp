//include library
#include <iostream>
using namespace std;
// write the function
int main(){
// declaring the variable
float p,t,r,interest;
//assigning the values to variables 
cout <<" what is the principle amount?";
cin >>p;
cout<<" what is the time?";
cin>>t;
cout<<"what is the rate?";
cin>>r;
// defining interest in form of other variables
interest=(p*r*t)/100;
cout<<"interest of given amounts is" << interest;
}
