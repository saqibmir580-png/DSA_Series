//given length and breath a of a rectangle wap to find whether numericaly area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter the length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    if(area>perimeter){
        cout<<area<<"area is greater than perimeter";
    }else{
        cout<<perimeter<<"perimeter is greater than area";
    }
}