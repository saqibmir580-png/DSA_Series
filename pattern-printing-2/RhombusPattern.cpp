//    ****    
//   ****
//  ****
// ****
//combination space and stars
//three loops are exists
//rows+space=n space=>n-row

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
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

