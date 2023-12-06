#include <iostream>
using namespace std;

int findSquareRoot(int num)
{
    int start = 0;
    int end = num;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int num = 68;
    int ans = findSquareRoot(num);
    cout << ans;
    return 0;
}

// h.w find exact value in point upto 3 decimal