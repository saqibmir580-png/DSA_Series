// ****
// ****
// ****
// **** 
// no of rows=>no. of lines& and of columns=>no of stars print in each line
// print the pattern
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<"*";
      }
      cout<<endl;
    }

}