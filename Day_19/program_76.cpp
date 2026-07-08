// to find sum of diagonal elements
#include<iostream>
using namespace std;

int main()
{
    int matrix[4][4] = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {1, 0, 0, 1}
    };
    int sum = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i == j || i+j == 4-1)
            {
                sum += matrix[i][j];
            }
        }
    }

    cout << sum;
    return 0;
}