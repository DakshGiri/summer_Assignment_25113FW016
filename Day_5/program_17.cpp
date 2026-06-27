// to check for perfect number

#include<iostream>
using namespace std;

int main()
{
    int sum = 1;

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //calculating sum of factors except 1 and number itself
    for(int i = 2; i*i <= N; i++)
    {
        if(N%i == 0)
        {
            sum += i;
            sum += N/i;
        }
    }

    //comparing sum of factors with the number itself
    if(N == sum)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not perfect number";
    }

    return 0;
}