//wap to find the sum of square of the first n natural numbers where the n will provided by the user
//1 2 3 4 5 6 7=>sum of the 
//formulla n(n+1)(2n+1)/6
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=n*(n+1)*(2*n+1)/6;
    cout<<"Sum first N natural number is:"<<sum;
    
}