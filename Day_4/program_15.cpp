// to check for armstrong number

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
// 1. taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

// 2. taking backup for calculations
    int N1 = N;

// 3. declaring variables
    int digitCount = 0, sum = 0, i;

// 4. counting number of digits
    i = 0; //initializing loop variable
    while(N1 > 0)
    {
        N1 /= 10;
        i++;
    }
    digitCount = i;

    N1 = N; //reinforcing backup

// 5. counting sum of digits raised to power
    while(N1 > 0)
    {
        sum += pow(N1%10, digitCount);
        N1 /= 10;
    }

// 6. comparing sum with the number itself
    if(N == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not armstrong"; 
    }

    return 0;
}