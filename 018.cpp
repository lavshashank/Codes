#include <iostream>
#include <vector>
using namespace std;

int secondLargestElement(int arr[], int size)
{
    int max = INT_MIN;
    int second_mac= INT_MIN;


    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>second_mac && arr[i] != max)
        {
            second_mac = arr[i];
        }
        
    }
    
    return second_mac;
}

int main()
{

    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    int largeIndex = secondLargestElement(arr, 6);
    cout<<largeIndex;
    
    return 0;
}