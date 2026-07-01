// reverse star pattern

#include<iostream>
using namespace std;

int main()
{
    int N, j;
    cout << "Enter grid size: ";
    cin >> N;

    for(int i = N; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}