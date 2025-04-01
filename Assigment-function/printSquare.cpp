// 1. Write a function to print squares of first n natural numbers, taking n as
// argument to the function
#include <iostream>
using namespace std;
int squareNum(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
       sum=sum+i*i;

    }
  return sum;
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    int value=squareNum(n);
    cout<<"value is"<<value;
}