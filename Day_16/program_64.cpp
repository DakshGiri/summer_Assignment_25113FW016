// to remove duplicate elements

#include<iostream>
using namespace std;

int main()
{

    int arr[] = {12, 7, 25, 12, 9, 7, 31, 18, 25, 42, 9, 12, 50, 31};
    int length = sizeof(arr)/sizeof(arr[0]);
    int newLength = 0;
    int i,j, position;

    for(i = 0; i < length; i++)
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
        
        newLength++;
        position = i+1;
        for(j = i+1; j < length; j++)
        {
            if(arr[j] != arr[i])
            {
                arr[position] = arr[j];
                position++;
            }
        }
    }

    length = newLength;
    for(i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}