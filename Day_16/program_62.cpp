// to find maximum frequncy element

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {14, 7, 22, 14, 9, 14, 31, 7, 22, 14, 5, 22, 14, 18, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int frequency;
    int maxFrequency = 0;
    int element;
    int j;

    for(int i = 0; i < length; i++)
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
        
        frequency = 0;
        for(j; j < length; j++)
        {
            if(arr[j] == arr[i])
            {
                frequency++;
            }
        }
        if(frequency > maxFrequency)
        {
            maxFrequency = frequency;
            element = arr[i];
        }
    }

    cout << element << " has the maximum frequency of " << maxFrequency;
    return 0;
}