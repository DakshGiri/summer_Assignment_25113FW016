// function to check for perfect number

#include<iostream>
using namespace std;

bool isPerfect(int num);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isPerfect(num))
    {
        cout << "perfect";
    }
    else
    {
        cout << "not perfect";
    }
    
    return 0;
}

bool isPerfect(int num)
{
    int sum = 1;

    //calculating sum of factors except 1 and number itself
    for(int i = 2; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
            sum += num/i;
        }
    }

    //comparing sum of factors with the number itself
    if(num == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}