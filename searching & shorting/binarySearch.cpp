#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid == target)
        {
            return 1;
        }
        else if (mid < target)
        {
            start = mid;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int binarySearchIndex(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = ((start + end) / 2);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    // int ans = binarySearch(arr, n, target);
    // cout << ans;
    int ans2 = binarySearchIndex(arr, n, target);
    cout << ans2;

    return 0;
}