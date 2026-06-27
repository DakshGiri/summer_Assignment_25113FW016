// to check for prime number

#include <iostream>
using namespace std;

int main()
{
    int divisionCount = 0;

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    switch(N)
    {
        case 1:
            cout << "Not prime";
            return 0;
        case 2: 
            cout << "Prime";
            return 0;
        case 3:
            cout << "Prime";
            return 0;
        case 4:
            cout << "Not prime";
            return 0;
    }

    for(int i = 2; i*i <= N; i++)
    {
        if(N%i == 0)
        {
            divisionCount++;
        }
    }

    if(divisionCount == 0)
    {
        cout << N << " is a prime number";
    }
    else
    {
        cout << N << " is not a prime number";
    }
    
    return 0;
}