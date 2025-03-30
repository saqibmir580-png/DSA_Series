//take three number and print them largest numbers with inbuilt function
// 
#include<iostream>
using namespace std;
int threeNum(int a,int b,int c){
    int first=max(a,b);
    int final=max(first,c);
    return final;
}
int main(){
 int a=56;
 int b=76;
 int c=90;
 cout<<threeNum(a,b,c);
}