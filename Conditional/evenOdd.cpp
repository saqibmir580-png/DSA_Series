//take the input from the user and check it is even or odd
// with help if and else
//even number2 4 6 8those which divisible by 2
//odd numbers area those which are not disvisible by 2
//12%2==0=>12 is even else then print  odd
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the numbers:";
cin>>num;
if(num%2==0){
    cout<<num<<"is Even Number";
}else{
    cout<<num<<"is Odd Number";
}
}