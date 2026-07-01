// number pyramid

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int i,j;
    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size-i; j++)
        {
            cout << "  ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for(j = i-1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}