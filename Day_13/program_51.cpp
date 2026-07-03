// to find largest and smallest elements in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34, 21, 0, 56, 0, 91, 100, 9, 42, 17, 88, 100};
    int largest = arr[0];
    int smallest = arr[0];

    for(int i : arr)
    {
        if(i > largest)
        {
            largest = i;
        }

        if(i < smallest)
        {
            smallest = i;
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest;
    return 0;
}