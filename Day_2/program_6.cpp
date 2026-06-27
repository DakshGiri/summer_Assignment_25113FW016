// to reverse any number

#include <iostream>
using namespace std;

int main()
{
    int reverseNumber = 0;

    //taking user inpput
    int N;
    cout << "Enter number: ";
    cin >> N;

    //backup number for calculations
    int N1 = N;

    //finding the reverse number using loop
    while( N1>0 )
    {
        reverseNumber = reverseNumber*10 + N1%10;
        N1 /= 10;
    }

    //displaying the output
    cout << "reverse of " << N << " = " << reverseNumber;
    
    return 0;
}