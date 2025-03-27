//Display this gp 3 12 48 upto n terms
//3 12 48=>
//3,3*4=12,12*4=48,48*4=  192
//we multply my 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a=3;//first value in the gp
    for(int i=1;i<=n;i++){
     cout<<a<<endl;
     a*=4;
    }

}