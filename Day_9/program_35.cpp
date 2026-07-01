// repeated character pattern

#include<iostream>
using namespace std;

int main()
{
    int N, j;
    cout << "Enter grid size: ";
    cin >> N;

    char alpha = 'A';

    for(int i = 1; i <= N; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << alpha;
        }
        alpha++;
        cout << endl;
    }
    return 0;
}