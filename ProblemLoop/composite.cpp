//wap to check if a number is composite or not
//what is composite numbers=>numbers divisible iteself and 1 and also divisible with another number that number is composite numbers
//12=>1,2,3.6and 12 so 12 is composite number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"composite numbers\n";
            break;//break is used to terminate the loop
        }else{
            cout<<"not a composite numbers";
        }
    }
}