// to check for strong number

#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    
    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //taking backup for calculations
    int N1 = N;

    while(N1 > 0)
    {
        switch( N1%10 )
        {
            case 0:
                sum += 1;
                break;
            case 1:
                sum += 1;
                break;
            case 2:
                sum += 2;
                break;
            case 3: 
                sum += 6;
                break;
            case 4:
                sum += 24;
                break;
            case 5:
                sum += 120;
                break;
            case 6:
                sum += 720;
                break;
            case 7:
                sum += 5040;
                break;
            case 8:
                sum += 40320;
                break;
            case 9:
                sum += 362880;
        }

        N1 /= 10;
    }

    if(N == sum)
    {
        cout << "Strong number";
    }
    else
    {
        cout << "Not strong number";
    }
    
    return 0;
}