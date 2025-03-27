// wap to take integer n as input  and print the sum of first n natural number
// 12345=>1+2+3+4+5=>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "enter the number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}