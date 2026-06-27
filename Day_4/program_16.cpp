// to print amrstrong numbers in a range

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
// taking user input
    int N;
    cout << "Enter range: ";
    cin >> N;

// declaring variables
    int digitCount = 0, sum = 0, N1, j;

// armstrong number in loop
    for(int i = 1; i <= N; i++)
    {
        //initializing variables for every iteration
        digitCount = 0; sum = 0; j = 0;

        //taking backup number for calculations
        N1 = i;

        //counting number of digits
        while(N1 > 0)
        {
            N1 /= 10;
            j++;
        }
        digitCount = j;

        //reinforcing backup
        N1 = i;

        //counting sum of digits raised to power
        while(N1 > 0)
        {
            sum += pow(N1%10, digitCount);
            N1 /= 10;
        }

        //displaying armstrong numbers
        if(i == sum)
        {
            cout << i << " ";
        }

    }

    return 0;
}