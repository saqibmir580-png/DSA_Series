//take the positive integer input and tell it if it is three digit number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=100 && num<=999){
        cout<<num<<"this number is three digit";
    }else{
        cout<<num<<"not a three digit number:";
    }
}