//to print the sum of first N natural numbers

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    //taking user input
    int N;
    cout << "Enter the number of natural numbers: ";
    cin >> N;

    //calculating the sum using for loop
    for( int i = 1; i <= N; i++)
    {
        sum += i;
    }

    //displaying the output sum
    cout << "Sum of first " << N << " natural numbers = " << sum;

    return 0;
}