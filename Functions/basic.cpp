#include <iostream>
using namespace std;
void printName(string name) 
{
    for (int i = 1; i <= 5; i++)
    {
        cout << name<<endl;
    }
}
int main()
{
    printName("Saqib");
}