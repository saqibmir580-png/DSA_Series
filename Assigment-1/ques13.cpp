//wap to find the eculdian distance two cooridinates take booth coordinates from the user as input
//x1y1 and x2y2 distance=x2-x1 hole square and y2-y1 hole square and take then under root

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    cout<<"Enter the coordinate x1:";
    cin>>x1;
    cout<<"Enter the coordinate x2:";
    cin>>x2;
    cout<<"Enter the coordinate y1:";
    cin>>y1;
    cout<<"Enter the coordinate y2:";
    cin>>y2;
    int eculdianDistance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"Eculdian Distance btw two points:"<<eculdianDistance;


}