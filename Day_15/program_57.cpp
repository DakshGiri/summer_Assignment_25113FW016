// to reverse array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp;

    for(int i = 0; i < length/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i -1] = temp;
    }

    for(int i : arr)
    {
        cout << i << " ";
    }
    
    return 0;
}