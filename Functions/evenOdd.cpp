//check the even and odd 
#include<iostream>
using namespace std;
void oddOrEven(int a){
    if(a%2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }

}
int main(){
int n;
cout<<"Enter the numbers";
cin>>n;
oddOrEven(n);
}