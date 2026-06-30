// recursive factorial

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    //taking user input
    int number;
    cout << "Enter number: ";
    cin >> number;

    //calling factorial function
    int fact = factorial(number);
    cout << fact;

    return 0;
}

int factorial(int n)
{
    if(n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}