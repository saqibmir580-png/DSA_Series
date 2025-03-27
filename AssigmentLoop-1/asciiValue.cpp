//wap to print all the ascii values and their equivalent character of aphabet using while loop
//a =97 and z=122
#include<iostream>
using namespace std;
int main(){
    int i=97;
    while(i<=122){
        cout<<i<<char(i)<<endl;
        i++;
    }
}