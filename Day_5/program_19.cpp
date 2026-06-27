// to print factors of a number

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //printing the factors in random order using loop
    for(int i = 1; i*i <= N; i++)
    {
        if(N%i == 0)
        {
            cout << i << " " << N/i << " ";
        }
    }

    return 0;
}