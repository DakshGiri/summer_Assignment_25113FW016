// to rotate array left

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp;

    for(int i = 1; i < length; i++)
    {
        temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}