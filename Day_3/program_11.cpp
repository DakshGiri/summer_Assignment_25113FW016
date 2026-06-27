// to find GCD of two numbers
// using formula GCD(a, b) = GCD(b, a%b)
// and when a%b == 0, then GCD(b, a%b) = b

#include <iostream>
using namespace std;

int main()
{
    int GCD, r;

    //taking user input
    int N1, N2;
    cout << "Enter first number: ";
    cin >> N1;
    cout << "Enter second number: ";
    cin >> N2;

    //taking backup for calculations
    int a = N1, b = N2;

    //finding GCD
    while(r != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    GCD = a;

    //displaying output
    cout << "GCD(" << N1 << ", " << N2 << ") = " << GCD; 

    return 0;
}