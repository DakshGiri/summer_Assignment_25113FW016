// to check for symmetric matrix
#include<iostream>
using namespace std;

int main()
{
    int matrix[4][4] = {
        {2,5,2,4},
        {5,3,7,6},
        {2,7,8,9},
        {4,6,9,0}
    };
    bool isSymmetric = true;

    for(int i = 0; i < 4-1; i++)
    {
        for(int j = i+1; j < 4; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric)
        {
            break;
        }
    }

    if(isSymmetric)
    {
        cout << "symmetric";
    }
    else
    {
        cout << "not symmetric";
    }

    return 0;
}