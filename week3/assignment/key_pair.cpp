#include <iostream>
#include <algorithm>
using namespace std;

bool twoPointerSum(int arr[], int n, int x)
{
    int l = 0;
    int h = n - 1;

    while (l < h)
    {
        int csum = arr[l] + arr[h];
        if (csum == x)
            return true;
        else if (csum > x)
            h--;
        else
            l++;
    }
    return false;
}

void keyPair(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    { 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "paired" << endl;
            }
        }
    }
}
int main()
{
    cout << "-----OUTPUT-----\n";
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = 6;
    int x = 16;

    // sort(arr, arr + n);

    // bool result = twoPointerSum(arr, n, x);

    // cout << (result ? "True" : "False") << endl;

    keyPair(arr, n, x);
    return 0;
}
