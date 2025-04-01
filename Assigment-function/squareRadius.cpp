//2. Write a function that takes the radius of a circle as an argument and returns 
//its area.
#include<iostream>
using namespace std;
int radusCircle(int r){
return 3.24*r*r;
}
int main(){
    int rd;
    cout<<"enter the radius of the circle";
    cin>>rd;
    int radiusValue=radusCircle(rd);
    cout<<"radius is="<<radiusValue;

}