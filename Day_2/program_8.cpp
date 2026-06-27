// to check for palindrome number

#include <iostream>
using namespace std;

int main()
{
// 1. To find reverse of number entered by user
    int reverseNumber = 0;

    //taking user input
    int N;
    cout << "Enter nunber: ";
    cin >> N;

    //taking backup number for calculations
    int N1 = N;

    //finding reverse of number using loop
    while(N1 > 0)
    {
        reverseNumber = reverseNumber*10 + N1%10;
        N1 /= 10;
    }


// 2. Testing equality of number with its reverse to determine if its palindrome or not
    if(N == reverseNumber)
    {
        cout << N << " is a palindrome";
    }
    else
    { 
        cout << N << " is not a palindrome";
    }
    
    return 0;
}