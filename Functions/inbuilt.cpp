#include<iostream>
#include<cmath>
using namespace std;
int maxNum(int a,int b){
return max(a,b);
}
int minNum(int a,int b){
return min(a,b);
}
int sqr(int a){
return sqrt(a);
}
int main(){
    int a=90;
    int b=23;
    cout<<"maximum number"<<maxNum(a,b)<<endl;
    cout<<"minimum number"<<minNum(a,b)<<endl;
    cout<<"Square of  number"<<sqr(a)<<endl;
}