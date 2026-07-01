// function to find maximum of two numbers

#include<iostream>
using namespace std;

int max(int a, int b)
{
    return (a>b) ? a : b;
}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << max(num1, num2);
    return 0;
}