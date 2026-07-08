// subtract matrices
#include<iostream>
using namespace std;

int main()
{
    int matrix1[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };
    int matrix2[3][3] = {
        {2,2,2},
        {2,2,2},
        {2,2,2}
    };
    int subtract[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            subtract[i][j] = matrix2[i][j] - matrix1[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << subtract[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}