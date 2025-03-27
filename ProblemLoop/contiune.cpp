//concept continue is used to skip the rest of code
//1 to 5 number we only use the 3 and 5 rest will be skip
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5;i++){
        if(i%2==0){
            continue;//2and 4 skip
        }
        cout<<i<<endl;
    }
}