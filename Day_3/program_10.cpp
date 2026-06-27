// to print prime numbers in a range
// simply prime number code in a loop

#include <iostream>
using namespace std;

int main()
{
    int divisionCount;
    int j; //declaring the inner loop variable

    //taking user input
    int N;
    cout << "Enter range: ";
    cin >> N;

    for(int i = 2; i <= N; i++)
    {
        divisionCount = 0;

        for(j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                divisionCount++;
            }
        }

        if(divisionCount == 0)
        {
            cout << i << " ";
        }
        else
        {
            continue;
        }

    }

    return 0;
}