// Write a function to count the number of digits in a number and then print the
// square of this number.
#include <iostream>
using namespace std;
int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
      count++;
      n/=10;
    }
    return count*count;
}
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    int value=countDigit(num);
    cout<<"square numbers is"<<value;
}