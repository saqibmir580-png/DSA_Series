//given the radius of the circle predict the output whether numerically area of this circle is larger tha circumference or not
//area of circle=3.14*R*R
//circumference=2*3.14*r
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    float area=3.14*r*r;
    float circumf=2*3.14*r;
    if(area>circumf){
        cout<<area<<"area is greater than circumference";
    }else{
        cout<<circumf<<"circumference is greater than area";
    }
}