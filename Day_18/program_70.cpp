// selection sort
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {42, 17, 83, 5, 29, 64, 91, 38, 12, 56};
    int length = sizeof(arr)/sizeof(arr[0]);
    int smallest, pos, temp;

    for(int i = 0; i < length-1; i++)
    {
        smallest = arr[i];
        pos = i;
        for(int j = i+1; j < length; j++)
        {
            if(arr[j] < smallest)
            {
                smallest = arr[j];
                pos = j;
            }
        }
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }

    for(int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}