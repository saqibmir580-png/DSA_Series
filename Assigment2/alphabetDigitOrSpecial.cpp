//wapto take input any character and check whether it is the alphabet digit or special character
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    int value=int(ch);
    if(value<=0 && value<=47 || value>=47 && value<=64 || value>=91 && value<=96 || value>=123 && value<=127){
        cout<<"Special character";
    }else if(value>47 && value<57){
        cout<<"Digit";
    }else{
        cout<<"Aphabet";
    }
}