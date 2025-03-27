// gp mulplication with number to form gp series
// 1,2,4,8,16,32
// 1,2,2*2=4,2*4=16,
// mupltiplication by 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the numbers: ";
    cin >> n;
    int a = 1; // first term to print in the series
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a *= 2;
    }
}