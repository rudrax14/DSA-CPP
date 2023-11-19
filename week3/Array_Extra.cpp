#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

// Questions
// 1)shift negative on one side
// 2)short 0 1 2 (leetcode (short colour))
// 3)Rotate Array N times (leetcode)
// 4)Missing Number (leetcode)
// 5)Rearange Array Elements By Sign (leetcode) (H.W)
// 6)Row With Maximum Ones (leetcode)
// 7)Rotate Iamge (leetcode) (IMP)

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

// method 1 / array
void shiftarray(int arr[], int size, int n)
{
    cout << "Array wala" << endl;
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

// method 2 // vector
void shiftarray2(int arr[], int size, int n)
{
    cout << "Vector vala" << endl;
    vector<int> ans(size);
    for (int i = 0; i < size; i++)
    {
        swap(arr[i], arr[(i + n) % size]);
    }
}

int missingNumber(vector<int> &arr)
{
    cout << "Missing number" << endl;
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int total = ((n) * (n + 1)) / 2;
    int ans = total - sum;
    return ans;
}

// transpose vector
void transpose(vector<vector<int>> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
int main()

{
    cout << "-------OUTPUT-------" << endl;
    //----------------------------------------------------------------//
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
//----------------------------------------------------------------//
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
    // int start = 0;
    // int end = size - 1;
    // for (int index = 0; index <= end; index++)
    // {
    //     if (arr[index] == 0)
    //     {
    //         swap(arr[index], arr[start]);
    //         start++;
    //     }
    //     else if (arr[index] == 2)
    //     {
    //         swap(arr[index], arr[end]);
    //         end--;
    //         index--;
    //     }
    // }

    // cout << "Printing Array" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // return 0;

//----------------------------------------------------------------//
    // shifting n to right

    // int arr[] = {1, 2, 3, 4, 5};
    // int size = 5;
    // // int n = 2;
    // int n;
    // cout << "Enter a value:";
    // cin >> n;

    // shiftarray(arr, size, n);
    // shiftarray2(arr, size, n);
//----------------------------------------------------------------//
    // 268. Missing Number

    // vector<int> arr = {1, 2, 0, 4, 5};

    // cout << "Number Missing =" << endl;

    // missingNumber(arr);
    // cout << missingNumber(arr);
    // print array
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
//----------------------------------------------------------------//
    // rotate vector 90 degree clockwise

    // vector<vector<int>> arr;

    // vector<int> vec1({1, 2, 3});
    // vector<int> vec2({4, 5, 6});
    // vector<int> vec3({7, 8, 9});

    // arr.push_back(vec1);
    // arr.push_back(vec2);
    // arr.push_back(vec3);

    // cout << "Before transpose:" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "After transpose:" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i; j < arr[i].size(); j++)
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "reverse" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     reverse(arr[i].begin(), arr[i].end());
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}