// to convert decimal into binary

#include<iostream>
#include<string>
using namespace std;

int main()
{
    //taking user input
    double decimalNumber;
    cout << "Enter number: ";
    cin >> decimalNumber;

    //declaring variables;
    int integerPart = decimalNumber/1;
    double fractionPart = decimalNumber - integerPart;
    string binaryNumber = "";

    //converting the integer part
    while(integerPart > 1)
    {
        binaryNumber = to_string(integerPart % 2) + binaryNumber;
        integerPart /= 2;
    }
    if(integerPart < 1)
    {
        binaryNumber = "0.";
    }
    else
    {
        binaryNumber = "1" + binaryNumber + ".";
    }

    //converting the fractional part
    for(int i = 1; i <= 4; i++)
    {
        integerPart = fractionPart * 2;
        fractionPart = fractionPart * 2 - integerPart;
        binaryNumber += to_string(integerPart);
    }

    //displaying the output
    cout << "binary of " << decimalNumber << " = " << binaryNumber;

    return 0;
}