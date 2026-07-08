// sorting array in descending order
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {42, 17, 83, 5, 29, 64, 91, 38, 12, 56};
    int length = sizeof(arr)/sizeof(arr[0]);
    int largest, pos, temp;

    for(int i = 0; i < length-1; i++)
    {
        largest = arr[i];
        pos = i;
        for(int j = i+1; j < length; j++)
        {
            if(arr[j] > largest)
            {
                largest = arr[j];
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