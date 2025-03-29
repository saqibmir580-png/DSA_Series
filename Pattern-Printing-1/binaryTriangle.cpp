// 1
// 0 1
// 1 0 1
// 0 1 0 1

//if both col and row even then the 1 print
// if row and col even then print the 1
// i=1 j=1 =>1
//i=2 j=1 => 0
//i=2 j=2=>1
//i=3 j=1 =>i+j%2==0 =>1 4%2=2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if(i==j){
                cout<<"1";
            }
            else if((i+j)%2==0){
                cout<<"1";
            }else{
                cout<<"0";
            }

        }
        cout << endl;
    }
}