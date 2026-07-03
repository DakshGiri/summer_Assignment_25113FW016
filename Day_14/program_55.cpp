// to find 2nd largest element of array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {63, 91, 27, 45, 91, 18, 72, 54, 72, 36, 12};
    int largest, secondLargest;

    int length = sizeof(arr)/sizeof(arr[0]);

    //initialization
    largest = max(arr[0], arr[1]);
    secondLargest = min(arr[0], arr[1]);

    for(int i = 2; i < length; i++)
    {
        if(arr[i]>largest && arr[i]>secondLargest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Largest element is: " << largest << endl;
    cout << "Second largest element is: " << secondLargest;

    return 0;
}