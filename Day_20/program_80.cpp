// to find column wise sum
#include<iostream>
using namespace std;

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
    int columnSum;

    for(int i = 0; i < 4; i++)
    {
        columnSum = 0;
        for(int j = 0; j < 4; j++)
        {
            columnSum += matrix[j][i];
        }
        cout << columnSum << " ";
    }
    
    return 0;
}