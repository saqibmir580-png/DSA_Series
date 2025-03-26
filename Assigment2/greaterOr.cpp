//take the 2 integer input and print the greater of them
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    if(num1>num2){
        cout<<num1<<"num1 is greater than num2";
    }else{
        cout<<"num2 is less than num1";
    }
}