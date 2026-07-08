// merging two arrays
#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3};
    int length1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {4,5,6,7,8};
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    int merge[length1 + length2];

    int pos = 0;

    for(int i : arr1)
    {
        merge[pos++] = i;
    }
    for(int i : arr2)
    {
        merge[pos++] = i;
    }

    for(int i : merge)
    {
        cout << i << " ";
    }
    
    return 0;
}