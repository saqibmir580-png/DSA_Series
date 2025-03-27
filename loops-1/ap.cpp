//display this ap 1,3,5,7,9 upto n term
//check it is ap
//common differnce should equal 3-1=2,5-3=2
//2 is common difference
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
     cout<<a;
     a+=2;
    }
}