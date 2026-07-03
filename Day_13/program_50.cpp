// to find sum and average of elements of array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34, 21, 0, 56, 78, 91, 13, 9, 42, 17, 88, 100};
    int sum = 0, length;
    float average;

    for(int i : arr)
    {
        sum += i;
    }

    length = sizeof(arr)/sizeof(arr[0]);
    average = sum/length;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;
    return 0;
}