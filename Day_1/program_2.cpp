// to print multiplication table of any number given by user

#include <iostream>
using namespace std;

int main()
{
    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //displaying the table using loop
    for( int i = 1; i <= 10; i++)
    {
        cout << N << " x " << i << " = " << N*i << endl;
    }

    return 0;
}