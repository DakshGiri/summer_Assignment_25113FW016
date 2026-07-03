// to find frequency of an element

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12, 7, 25, 12, 9, 25, 12, 18, 7, 30, 25, 12, 5};
    int frequency = 0;
    
    int key;
    cout << "Enter element: ";
    cin >> key;

    for(int i : arr)
    {
        if(i == key)
        {
            frequency++;
        }
    }

    cout << key << " appears " << frequency << " times";
    return 0;
}