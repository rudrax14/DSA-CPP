// binary search t.t 20:35

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int> &nums, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int countPairsWithDifferenceK(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int count = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        // Use binary search to find the second element in the pair
        int target = nums[i] + k;
        int index = binarySearch(nums, i + 1, nums.size() - 1, target);

        if (index != -1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;

    int result = countPairsWithDifferenceK(nums, k);

    cout << "Count of distinct pairs with difference " << k << ": " << result << endl;

    return 0;
}
