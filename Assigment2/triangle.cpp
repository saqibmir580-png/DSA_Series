// wap to input side of triangle and check whether a trianle is equilateral or scalence,or issoless triangle
// equilateral=>a=b=c both are equal
// scalence=>a=!b!=c both are not equal
// issoless=>a=b but c!=a or b=c but a!=b  or c=a but b!=c
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout<<"enter c";
    cin>>c;
    if (a == b && b == c)
    
    {
        cout << "Equilateral triangle";
    }
    else if (a != b && b != c)
    {
        cout << "scalence triangle";
    }
    else if (a == b && c != a || b == c && a != b || a == c && b != c)
    {
        cout << "issoless triangle";
    }
}