// create simple software we converts some units
// we use switch statements are used
#include <iostream>
using namespace std;
int main()
{
    int choice;

    cout << "wellcome to convertor!!\n";
    cout << "Enter your choice \n 1.Cm to Ft\n 2.Km to Miles\n 3.USD to INR\n 4.Exit\n";
    cin >> choice;
    switch (choice)
    {

    case 1:
        int length;
        float feet;
        cout << "Enter the length in cm:";
        cin >> length;
        feet = length / 30.48;
        cout << feet;
        break;
    case 2:
        int km;
        float miles;
        cout << "Enter the Km :";
        cin >> km;
        miles = km / 1.609;
        cout << miles;
        break;
    case 3:
        int usd;
        float INR;
        cout << "Enter the $USD :";
        cin >> usd;
        INR = usd * 86.95;
        cout << INR;
        break;

    default:
        exit(0);
    }
}