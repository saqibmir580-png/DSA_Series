    //      1
    //     121
    //     12321
    //    1234321
//their exits two triangles rigth and left and stars and spaces

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
        for (int k = 1; k<=i; k++)
        {
            cout <<k;
        }
        for (int q = i-1; q>=1; q--)
        {
            cout <<q;
        }
        cout<<endl;
    }
}