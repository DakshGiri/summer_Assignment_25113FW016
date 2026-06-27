// to find nth term of fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int N1 = 0, N2 = 1, nextTerm;
    
    //taking user input
    int N;
    cout << "Enter number: ";
    cin >> N;

    //calculating nth term
    for(int i = 1; i <= N-2; i++)
    {
        nextTerm = N1 + N2;
        N1 = N2;
        N2 = nextTerm;
    }

    //displaying output
    cout << nextTerm;
    return 0;
}