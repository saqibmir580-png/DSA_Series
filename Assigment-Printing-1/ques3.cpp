//A
//A B
//A B C
//A B C D
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
   
    for(int i=1;i<=n;i++){
     int a=1;
        for(int j=1;j<=i;j++){
            cout<<char(64+a);
            a++;
        }
        cout<<endl;
    }
}