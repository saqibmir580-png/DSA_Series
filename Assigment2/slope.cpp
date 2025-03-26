//given three points x1y1 x2y2 x3 y3 wap to check the three points fall on the straight line
#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter the x1";
    cin>>x1;
    cout<<"enter the x2";
    cin>>x2;
    cout<<"enter the x3";
    cin>>x3;
    cout<<"enter the y1";
    cin>>y1;
    cout<<"enter the y2";
    cin>>y2;
    cout<<"enter the y3";
    cin>>y3;
    float m1=y2-y1/x2-x1;
    float m2=y3-y2/x3-x2;
    if(m1==m2){
        cout<<"Collinear";
    }else{
        cout<<"non-colinear";
    }
}