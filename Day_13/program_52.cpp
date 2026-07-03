//to count even and odd elements in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34, 21, 0, 56, 78, 91, 13, 9, 42, 17, 88, 100};
    int evenCount = 0;
    int oddCount = 0;

    for(int i : arr)
    {
        if(i%2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Even number of elements = " << evenCount << endl;
    cout << "Odd number of elements = " << oddCount;
    return 0;
}