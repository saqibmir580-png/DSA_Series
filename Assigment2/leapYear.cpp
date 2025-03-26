//any year is input through the keyboard wap to determine whether the year is or not.(considering leap year occurs after every 4 year)
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the any year:";
    cin>>year;
    if(year%4==0){
        cout<<year<<"This year leap year: ";
    }else{
        cout<<year<<"This year is not leap year: ";
    }
}