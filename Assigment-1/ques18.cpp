#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int c=13;
    int result =a<b && b<c || c==10;//=> 5<10=>true=>b<c=>10<13=>true or 13==10=>false
    //overall resultr => answers is 1 but 1=>true
    cout<<result;
}