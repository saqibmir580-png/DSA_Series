// Given two numbers a and b, write a function to print all odd numbers between 
// them. 
#include<iostream>
using namespace std;
void printOdd(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
         cout<<i<<endl;
        }
    }

}
int main(){
    int n1,n2;
    cout<<"enter the first:";
    cin>>n1;
    cout<<"enter the last:";
    cin>>n2;
    printOdd(n1,n2); 
    }