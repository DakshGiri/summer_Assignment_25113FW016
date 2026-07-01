// function to check for armstrong number

#include<iostream>
#include<cmath>
using namespace std;

bool isArmstr(int num);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isArmstr(num))
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
    
    return 0;
}

bool isArmstr(int num)
{
// 1. taking backup for calculations
    int N1 = num;

// 2. declaring variables
    int digitCount = 0, sum = 0, i;

// 3. counting number of digits
    i = 0; //initializing loop variable
    while(N1 > 0)
    {
        N1 /= 10;
        i++;
    }
    digitCount = i;

    N1 = num; //reinforcing backup

// 4. counting sum of digits raised to power
    while(N1 > 0)
    {
        sum += pow(N1%10, digitCount);
        N1 /= 10;
    }

// 5. comparing sum with the number itself
    if(num == sum)
    {
        return true;
    }
    else
    {
        return false; 
    }
}