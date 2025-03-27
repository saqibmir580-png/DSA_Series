// print all the odd numbers btween 1 to 100;
// odd which is not divisble by 2 thier exit a remaider
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "is odd number";
        }
    }
}