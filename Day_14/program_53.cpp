// to perform linear search on an array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {42, 17, 83, 5, 29, 64, 91, 38, 12, 56};
    
    int key;
    cout << "Enter element to be searched: ";
    cin >> key;

    int pos = -1;

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << key << " found at index " << pos;
    }
    return 0;
}