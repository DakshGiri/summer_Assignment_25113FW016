// to generate fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int N1 = 0, N2 = 1, nextTerm;

    //taking user input
    int N;
    cout << "Enter number of terms: ";
    cin >> N;

    //displaying the terms of series
    cout << N1 << " " << N2 << " ";
    for(int i = 1; i <= N-2; i++)
    {
        nextTerm = N1 + N2;
        cout << nextTerm << " ";
        N1 = N2;
        N2 = nextTerm;
    }

    return 0;
}