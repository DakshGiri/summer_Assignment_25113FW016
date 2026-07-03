// to find duplicate elements in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {18, 42, 7, 18, 25, 42, 9, 31, 7, 18, 56, 31, 90};
    int j;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(arr[j] == arr[i])
            {
                break;
            }
        }
        if(j < i)
        {
            continue;
        }
        for(j = i+1; j < length; j++)
        {
            if(arr[j] == arr[i])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}