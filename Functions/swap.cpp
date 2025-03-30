#include<iostream>
using namespace std;
int swap(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
return a;
}
int main(){
int a=4;
int b=5;
cout<<"before"<<a<<b<<endl;
swap(a,b);


}