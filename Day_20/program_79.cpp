// to find row wise sum
#include<iostream>
using namespace std;

int main()
{
    int matrix[4][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };
    int rowSum;

    for(int i = 0; i < 4; i++)
    {
        rowSum = 0;
        for(int j = 0; j < 4; j++)
        {
            rowSum += matrix[i][j];
        }
        cout << rowSum << endl;
    }
    
    return 0;
}