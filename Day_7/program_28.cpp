// recursive reverse of number

#include<iostream>
using namespace std;

int reverse(int num, int rev = 0)
{
    if(num == 0)
    {
        return rev;
    }
    else
    {
        return reverse(num/10, rev*10 + num%10);
    }
}

int main()
{
    int N;
    cout << "Enter number: ";
    cin >> N;

    cout << reverse(N);
    return 0;
}