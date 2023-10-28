#include <iostream>
#include <vector>
using namespace std;

// Questions
// 1)shift negative on one side
// 2)short 0 1 2 (leetcode (short colour))
// 3)Rotate Array N times (leetcode)
// 4)Missing Number (leetcode)
// 5)Rearange Array Elements By Sign (leetcode) (H.W)
// 6)Row With Maximum Ones (leetcode)

void shiftNegativeOneSide(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// method 1
void shiftarray(int arr[], int size, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

// method 2
void shiftarray2(int arr[], int size, int n)
{
    vector<int> ans(size);
    for (int i = 0; i < size; i++)
    {
        swap(arr[i], arr[(i + n) % size]);
    }
}

int main()

{
    // shiftNegativeOneSide
    // int arr[] = {1, -2, 3, 12, -3, 5, -8};
    // int size = 7;

    // shiftNegativeOneSide(arr, size);
    // cout << "Printing Array" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // using while loop
    // int i = 0;
    // int j = 0;
    // while (i < size)
    // {
    //     if (arr[i] < 0)
    //     {
    //         swap(arr[i], arr[j]);
    //         j++;
    //     }
    //     i++;
    // }
    // cout << "Printing Array" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // short 0,1,2

    // int arr[] = {0, 1, 2, 1, 1, 2, 0, 0, 2};
    // int size = 9;

    // int left = 0;         // Left pointer for 0s
    // int right = size - 1; // Right pointer for 2s
    // int index = 0;        // Current index

    // while (index <= right)
    // {
    //     if (arr[index] == 0)
    //     {
    //         swap(arr[index], arr[left]);
    //         left++;
    //         index++;
    //     }
    //     else if (arr[index] == 2)
    //     {
    //         swap(arr[index], arr[right]);
    //         right--;
    //     }
    //     else
    //     {
    //         index++;
    //     }
    // }

    // using for loop below
    // int i = 0;
    // int j = size - 1;
    // for (int index = 0; index <= j; index++)
    // {
    //     if (arr[index] == 0)
    //     {
    //         swap(arr[index], arr[i]);
    //         i++;
    //     }
    //     else if (arr[index] == 2)
    //     {
    //         swap(arr[index], arr[j]);
    //         j--;
    //         index--;
    //     }
    // }

    // cout << "Printing Array" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // return 0;

    // shifting n to right

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    // int n = 2;
    int n;
    cout << "Enter a value:";
    cin >> n;

    shiftarray2(arr, size, n);

    // print array
    for (auto i : arr)
    {
        cout << i << " ";
    }
}