// multiplication of matrices
#include<iostream>
using namespace std;

int main()
{
    int A[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {2,0,1,3}
    };
    int B[4][3] = {
        {1,2,0},
        {3,1,4},
        {2,5,1},
        {0,2,3}
    };
    int product[3][3];
    int sum;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum = 0;
            for(int k = 0; k < 4; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            product[i][j] = sum;
        }

    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}