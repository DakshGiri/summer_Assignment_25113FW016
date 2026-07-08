// bubble sort
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {42, 17, 83, 5, 29, 64, 91, 38, 12, 56};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp;
    bool swapped;

    for(int i = 1; i < length; i++)
    {
        swapped = false;
        for(int j = 0; j < length-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }

    for(int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}