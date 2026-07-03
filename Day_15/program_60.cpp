// moving zeroes to end of array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 0, 3, 0, 8, 1, 0, 6, 2, 0, 9, 0, 0};
    int j = 0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length; i++)
    {
        if(arr[i] != 0)
        {
            if(i != j)
            {
                arr[j] = arr[i];
                arr[i] = 0;
            }
            j++;
        }
    }

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}