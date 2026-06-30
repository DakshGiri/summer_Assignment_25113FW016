// recursive sum of digits

#include<iostream>
using namespace std;

int sum(int n)
{
    if(n > 1)
    {
        return n + sum(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int N;
    cout << "Enter number: ";
    cin >> N;

    cout << sum(N);
    return 0;
}