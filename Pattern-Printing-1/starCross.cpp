// 1*            *
//   *      *
//      *
//    *      *
// *             *  
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the odd number:";
    cin>>n;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
           if(i==mid && j==mid){
              cout<<"";
          }
          if(j==n+1-i){
              cout<<"*";
          }
            if(i==j && i!=mid && j!=mid){
              cout<<"*";
          }
       
          else{
              cout<<" ";
          }
        
     
        
      }
      cout<<endl;
    }

}