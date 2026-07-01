// reverse pyramid

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int i,j;
    for(i = size; i >= 1; i--)
    {
        for(j = 1; j <= size-i; j++)
        {
            cout << "  ";
        }
        for(j = 1; j+1 <= 2*i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}