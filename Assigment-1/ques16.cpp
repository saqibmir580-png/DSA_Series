//given 2 fraction find the sum of 2 fraction.take the numerator and denomentors take deno and num value from the user'
#include<iostream>
using namespace std;
int main(){
    int n1,n2,d1,d2;
    cout<<"Enter the numerators:";
    cin>>n1;
    cout<<"Enter the denomentors:";
    cin>>d1;
    cout<<"Enter the numerators:";
    cin>>n2;
    cout<<"Enter the denomentors:";
    cin>>d2;
    float sum=n1*d2+n2*d2/d1*d2;
    cout<<"sum of the 2 fraction are:"<<sum;

}