// hollow square pattern

#include<iostream>
using namespace std;

int main()
{
    int N, j;
    cout << "Enter grid size: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(j = 1; j <= N; j++)
        {
            if(i==1||j==1||i==N||j==N)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}