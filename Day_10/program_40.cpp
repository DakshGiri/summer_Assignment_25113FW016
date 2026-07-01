// character pyramid

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    char alpha;

    int i,j;
    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size-i; j++)
        {
            cout << "  ";
        }

        alpha = 'A';

        for(j = 1; j <= i; j++)
        {
            cout << alpha++ << " ";
        }

        alpha--;
        
        for(j = i-1; j > 0; j--)
        {
            cout << --alpha << " ";
        }
        cout << endl;
    }
    return 0;
}