#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// through sorting O(nlogn)

// vector<int> findClosestElements(vector<int> &arr, int k, int x)
// {
//     vector<pair<int, int>> diffAndIndex; // making pair

//     // for loop iteration
//     for (int i = 0; i < arr.size(); i++)
//     {
//         diffAndIndex.push_back({arr[i], abs(arr[i] - x)}); // push back index,diff
//     }

//     // Sort the original array based on absolute differences
//     sort(arr.begin(), arr.end(), [x](int a, int b)
//          { return abs(a - x) < abs(b - x); });

//     // Extract the first k elements from the sorted array
//     vector<int> result(arr.begin(), arr.begin() + k);

//     return result;
// }

// int main()
// {
//     // Example usage

//     // Example array
//     vector<int> arr = {1, 2, 3, 4, 5};

//     // diffrence
//     int target = 3;

//     // Size of an array
//     int k = 4;

//        vector<int> closestElements = findClosestElements(arr, k, target);

//     // Display the result
//     cout << "Closest Elements (sorted): ";
//     for (int element : closestElements)
//     {
//         cout << element << " ";
//     }

//     return 0;
// }

// two pointer approach








vector<int> twoPointerApproach(vector<int> &arr, int k, int diff)
{
    int l = 0;
    int h = arr.size() - 1;
    vector<int> ans;

    while (h-l >= k)
    {
        if (diff - arr[l] > arr[h] - diff)
        {
            l++;
        }
        else
        {
            h--;
        }
        // ans.clear(); // Clearing the vector before repopulating
        for (int i = l; i <= h; i++)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int diff = 3;
    int k = 4;

    vector<int> twoPointer = twoPointerApproach(arr, k, diff);

    for (int num : twoPointer)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
