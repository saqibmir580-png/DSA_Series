//Take the input of principal time rate and find the simple intrest
//sp=p*r*t/100
#include<iostream>
using namespace std;
int main(){
int principle,rate,time;
float simpleIntrest;
cout<<"Enter the principle: ";
cin>>principle;
cout<<"Enter the rates";
cin>>rate;
cout<<"Enter the time";
cin>>time;
simpleIntrest=principle*rate*time/100;
cout<<"Simple intrest calculated is:"<<simpleIntrest;

}