// to find product of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int digitProduct = 1;

    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //taking backup number for calculations
    int N1 = N;

    //calculating product of digits using loop
    while(N1 > 0)
    {
        digitProduct = digitProduct * (N1%10);
        N1 /= 10;
    }

    //displaying output
    cout << "Product of digits of " << N << " = " << digitProduct;

    return 0;
}