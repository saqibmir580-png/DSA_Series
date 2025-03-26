//wap to check whether a character is alphabet or not
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the alphabet: ";
    cin>>ch;
    int value=int(ch);
    if(value>=97 && value<=122 ||value>=65 && value<=96){
        int value1=char(value);
        cout<<value1<<"this is alphabet";
    }else{
        int value1=char(value);
        cout<<value1<<"this is not aphabet";
    }
}