// wap to check the numbers is prime or not
// prime number is that number is divisble by 1 and itself
// 5=>divisible 1 and 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"Number is Prime";
    }else{
        cout<<"Number is not prime";
    }
}