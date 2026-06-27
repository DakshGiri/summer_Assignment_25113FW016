// to find sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int digitSum = 0;

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //backup number for calculations
    int N1 = N;

    //calculating sum of digits using loop
    while( N1 > 0 )
    {
        digitSum += N1%10;
        N1 /= 10;
    }

    //displaying output
    cout << "the sum of digits of " << N << " = " << digitSum;

    return 0;
}