// character triangle

#include<iostream>
using namespace std;

int main()
{
    //taking user input
    int N;
    cout << "Enter grid size: ";
    cin >> N;

    char alpha;

    for(int i = 1; i <= N; i++)
    {
        alpha = 'A';
        for(int j = 1; j <= i; j++)
        {
            cout << alpha++ << " ";
        }
        cout << endl;
    }

    return 0;
}