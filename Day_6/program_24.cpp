// to calculate x^n without pow()

#include<iostream>
using namespace std;

int main()
{
    //taking user input
    int base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;

    int value = 1;

    //calculating
    for(int i = 1; i <= power; i++)
    {
        value *= base;
    }

    //displaying output
    cout << base << "^" << power << " = " << value;

    return 0;
}