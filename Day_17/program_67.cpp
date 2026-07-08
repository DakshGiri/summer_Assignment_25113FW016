// to find intersection
#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5,6};
    int length1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {3,5,6};
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    int intersect[min(length1, length2)];

    int pos = 0;
    int j;
    bool c;

    for(int i = 0; i < length1; i++)
    {
        c = false;
        for(j = 0; j < length2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                c = true;
                break;
            }
        }
        if(c)
        {
            intersect[pos++] = arr1[i];
        }
    }

    for(int i : intersect)
    {
        cout << i << " ";
    }
    
    return 0;
}