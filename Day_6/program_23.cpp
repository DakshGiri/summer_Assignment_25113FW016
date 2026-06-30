//  to count set bits in a number

#include<iostream>
#include<string>
using namespace std;

int main()
{
    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    int number = N;
    int setBits = 0;

    //counting the set bits
    while(number > 0)
    {
        setBits += number % 2;
        number /= 2;
    }

    //displaying the output
    cout << "Set bits in " << N << " = " << setBits;

    return 0;
}