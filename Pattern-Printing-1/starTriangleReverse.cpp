// ***
// **
// *
//ro+col=stars=star=4
//star=n+1
//col=stars-row
//j=n+1-i
//j=4-i
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n+1-i;j++){
        cout<<"*";
      }
      cout<<endl;
    }

}