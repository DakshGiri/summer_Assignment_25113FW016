// to calculate factorial of any number

#include <iostream>
using namespace std;

int main()
{
    int fact = 1;

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    if(N == 0)
    {
        cout << N << "!" << " = " << 1;
        return 0;
    }

    //calculating factorial using loop
    for( int i = 1; i <= N; i++)
    {
        fact *= i;
    }

    //displaying the output
    cout << N << "!" << " = " << fact;
    
    return 0;
}