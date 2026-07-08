// binary search
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);

    int beg = 0;
    int end = length - 1;
    int mid = (beg + end)/2;

    int element;
    cout << "Enter element to be searched: ";
    cin >> element;

    int pos = -1;

    while(true)
    {
        if(element > arr[mid])
        {
            beg = mid;
            mid = (beg + end)/2;
        }
        else if(element < arr[mid])
        {
            end = mid;
            mid = (beg + end)/2;
        }
        else
        {
            pos = mid;
            break;
        }
    }

    if(pos == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << element << " found at index " << pos;
    }

    return 0;
}