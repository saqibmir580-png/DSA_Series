// take positive integer input and tell if it is Divisible by 5 & 3
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << num << "number is divisble by 3 and 5";
    }
    else
    {
        cout << num << " number is not divisible by 3 and 5";
    }
}