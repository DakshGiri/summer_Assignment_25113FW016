// function to check for prime number

#include<iostream>
#include<string>
using namespace std;

string prime(int num);

int main()
{
    int num;
    cout << "Enter a natural number: ";
    cin >> num;

    cout << prime(num);
    return 0;
}

string prime(int num)
{
    switch(num)
    {
        case 1:
            return "not prime";
        case 2:
            return "prime";
        case 3:
            return "prime";
        case 4:
            return "not prime";
    }

    int divisionCount = 0;

    for(int i = 2; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            divisionCount++;
            break;
        }
    }

    return (divisionCount == 0) ? "prime" : "not prime";
}