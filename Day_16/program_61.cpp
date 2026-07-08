// to find missing number

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,5,6,7};
    int expectedSum = 28;
    int actualSum = 0;
    int missingNumber;

    for(int i : arr)
    {
        actualSum += i;
    }

    missingNumber = expectedSum - actualSum;
    cout << missingNumber;
    return 0;
}