#include<iostream>
using namespace std;
int main(){
    //implict type cast also automaticlly convert
    int num=100;
    float b=7.6;
    float result=num+b;
    cout<<" "<<  result;

    //explict the type cast
    float p=3.2;
    int a=int(p);
    cout<<"  "<<a;
}