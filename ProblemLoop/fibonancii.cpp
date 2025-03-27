// print nth value of fibonacii series
//fib(2)
//1,1,2,3,5
//sum prvious two term
//n-1and n-2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers:";
    cin >> n;
    int a = 1;
    int b=1;
    int sum=0;//fib3
    for (int i = 1; i <= n-2; i++){//why n-2 bcoz we remove first two terms
      sum=a+b;
      a=b;
      b=sum;
    }
    cout<<sum;
  

        
}