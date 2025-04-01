//    *
//   **
//  ***
// ****
// rows=1 and spaces 3
// row=2 and space 2  row+space=n  space=n-row
// combinations stars and spaces
// their exits three loops
// one for rows and other is spaces and other is prints stars
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the numbers of rows";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}