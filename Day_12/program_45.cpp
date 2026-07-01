// function to check for palindrome

#include<iostream>
using namespace std;

bool isPalindrome(int num);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isPalindrome(num))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    
    return 0;
}

bool isPalindrome(int num)
{
// 1. To find reverse of number entered by user
    int reverseNumber = 0;

    //taking backup number for calculations
    int N1 = num;

    //finding reverse of number using loop
    while(N1 > 0)
    {
        reverseNumber = reverseNumber*10 + N1%10;
        N1 /= 10;
    }


// 2. Testing equality of number with its reverse to determine if its palindrome or not
    if(num == reverseNumber)
    {
        return true;
    }
    else
    { 
        return false;
    }
}