// . WAP to print the sum of a given number and its reverse.
// Sample Input: 12
// Sample Output: 33 [12+21]
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int b = n;
    int sum = 0;
    int reverse = 0;
    while (n > 0)
    {
        int last = n % 10;
        reverse = reverse * 10 + last;
        n /= 10;
    }

    cout << reverse + b;
}