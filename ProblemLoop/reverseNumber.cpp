// wap to reverse the number
// 123=>321
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {                                        // 123
        int last_digit = n%10;             // 3;2;1
        reverse = reverse * 10 + last_digit; // 3,32,321
        n /= 10;                             // 12
    }
    cout << reverse;
}