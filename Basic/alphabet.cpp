#include<iostream>
using namespace std;
int main(){
    //we enter the character and the print the asccii value of the chararcter
    //and also the aphabet value we subtract the value withe 64;

    char ch;
    cout<<"Enter the character:  ";
    cout<<endl;
    cin>>ch;
    int value=int(ch);
    cout<<value-64;
}
