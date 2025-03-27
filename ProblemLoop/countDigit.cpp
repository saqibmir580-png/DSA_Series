//wap to count the number of digits 
//123=>count 3
//123/10=12/10=>1/10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int count=0;
    while(n>0){//n=123>0;12>0;1>0;0>0=false
        count++;//1;2;3
       n/=10;//123/10=12;12/10=1;1/10=0;
    }
    cout<<count;

}