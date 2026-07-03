// to input and display array

#include<iostream>
using namespace std;

int main()
{
    int arr[6];

    //input array
    for(int i = 0; i < 6; i++)
    {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    //display array
    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}