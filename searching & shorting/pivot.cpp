#include <iostream>
#include <vector>
using namespace std;

int findPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        // corner case
        if (start == end)
        {
            // single element
            return start;
        }
        int mid = start + (end - start) / 2;
        if (mid+1 < n && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (mid-1>=0 && arr[mid] < arr[mid - 1])
        {
            return arr[mid - 1];
        }
        else if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // int arr[]={11, 13, 15, 1, 3, 5, 7, 9};
    int arr[]={1,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Pivot is: " << findPivot(arr, n);
    return 0;
}