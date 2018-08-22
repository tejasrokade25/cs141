// include library
#include <iostream>
using namespace std;
//write the function 
int main(){
// declaring the variables
int t,r,n ;
float compoundinterest, p;
// assigning the values to variables
cout <<" what is the principle amount?";
cin >>p;
cout<<" what is the time?";
cin>>t;
cout<<"what is the rate?";
cin>>r;
cout << " how many times is it compounded per year? ";
cin >> n;
// defining compound interest in form of p,n,r,t
compoundinterest= p*((1+r/n)^n*t);
cout<<"compound interest of given amounts is" << compoundinterest;
}
