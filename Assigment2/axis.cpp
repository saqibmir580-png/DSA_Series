// given a point (x,y) wap find out the if it lie on axis y-axis or origin (0,0)
// point lies on x-axis means x=0 and y!=0
//  point lies on y-axis means x!=0 ans y=0
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the x-axis point: ";
    cin >> x;
    cout << "enter the y-axis point : ";
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "point lies on the origin";
    }
    else if (x == 0 && y != 0)
    {
        cout << "point lies on the x-axis";
    }
    else if (x != 0 && y == 0)
    {
        cout << "point lies on the y-axis";
    }
    else
    {
        cout << "point lies on the region";
    }
}