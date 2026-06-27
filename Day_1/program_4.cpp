// to count digits in a number

#include <iostream>
using namespace std;

int main()
{
    int countDigits = 0;

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //taking backup number for calculations
    int N1 = N;

    //counting the number of digits using loop
    while( N1 > 0)
    {
        N1 /= 10;
        countDigits++;
    }

    //displaying the output
    cout << "The number of digits in " << N << " = " << countDigits;
    
    return 0;
}