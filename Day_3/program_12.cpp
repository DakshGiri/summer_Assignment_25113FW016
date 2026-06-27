// to find LCM of two numbers
// using formula LCM(a, b) = (a x b)/GCD(a, b)

#include <iostream>
using namespace std;

int main()
{
    int GCD, r, LCM;

    // 1. Calculating GCD
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

    // 2. Calculating LCM
        LCM = (N1 * N2)/GCD;

    // 3. displaying the output
        cout << "LCM(" << N1 << " ," << N2 << ") = " << LCM;

    return 0;
}