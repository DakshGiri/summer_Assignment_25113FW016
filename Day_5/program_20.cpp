// to find largest prime factor

#include<iostream>
using namespace std;

int main()
{
    int LPF; // Largest Prime Factor

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //backup for calculations
    int N1 = N;

    //finding the largest prime factor
    for(int i = 2; N1 > 1; i++)
    {
        while(N1%i == 0)
        {
            N1 /= i;
            LPF = i;
        }
    }

    //displaying the output
    cout << "Largest prime factor of " << N << " = " << LPF;
    
    return 0;
}