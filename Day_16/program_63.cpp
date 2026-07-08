// to find pair with given sum

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 3, 12, 13, 6, 7, 8, 11, 15, 2};
    int length = sizeof(arr)/sizeof(arr[0]);
    int j;

    int sum;
    cout << "Enter sum: ";
    cin >> sum;

    for(int i = 0; i < length; i++)
    {
        for(j = i+1; j < length; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}