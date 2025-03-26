//the minimum angle between the hour hand and min hand when time is 9 is 90 degree
//360=>12hour one complete rotation
//1hour=360/12=30deg;
//1min=60*60
//1min=60*60/60=6deg
//when calculate 9 so differnece btw hour-min give the absolute value
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int mint,hour;
    cout<<"enter the hour:";
    cin>>hour;
    cout<<"enter the mint:";
    cin>>mint;
    int diff=abs(hour-mint);
    if(diff>180){
        diff=360-diff;
    }
    cout<<"min angle is:"<<diff;


}