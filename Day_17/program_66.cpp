// union of arrays
#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5};
    int length1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {12,13,14,3,4,5};
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    int merge[length1 + length2];
    
    bool c;
    int j, length;
    int pos = 0;

    for(int i : arr1)
    {
        merge[pos++] = i;
    }

    for(int i : arr2)
    {
        c = true;
        for(j = 0; j < length1; j++)
        {
            if(i == arr1[j])
            {
                c = false;
                break;
            }
        }
        if(c)
        {
            merge[pos++] = i;
        }
    }

    length = pos;

    for(int i = 0; i < length; i++)
    {
        cout << merge[i] << " ";
    }

    return 0;
}