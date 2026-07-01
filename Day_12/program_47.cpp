// function to calculate nth term term of fibonacci series

#include<iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << fibonacci(num);
    return 0;
}

int fibonacci(int n)
{
    if(n > 2)
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    else
    {
        return n-1;
    }
}