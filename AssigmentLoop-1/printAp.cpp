//display the ap 4 7 10 13 16..n
//we calculate common differnence
//7-4=>3,10-7=>3
//common difference=3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a=4;//first print value in the ap
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }

}