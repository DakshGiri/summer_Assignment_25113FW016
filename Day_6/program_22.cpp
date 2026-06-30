// to convert binary into decimal

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    double decimalNumber = 0;
    string integerPart;
    string fractionPart;

    //taking user input
    string binaryNumber;
    cout << "Enter binary number: ";
    cin >> binaryNumber;

    //splitting the number at point if possible
    size_t pos = binaryNumber.find('.');
    if(pos != string::npos)
    {
        integerPart = binaryNumber.substr(0, pos);
        fractionPart = binaryNumber.substr(pos + 1);
    }
    else
    {
        integerPart = binaryNumber;
    }

    //converting the integer part
    int integerPartlen = integerPart.length();
    for(int i = 0; i < integerPartlen; i++)
    {
        decimalNumber += (integerPart[i] - '0') * pow(2, integerPartlen - i - 1);
    }

    //converting the fractional part
    int fractionPartlen = fractionPart.length();
    for(int i = 0; i < fractionPartlen; i++)
    {
        decimalNumber += (fractionPart[i] - '0') * pow(2, -(i+1));
    }

    //displaying output
    cout << "Decimal of " << binaryNumber << " = " << decimalNumber;

    return 0;
}