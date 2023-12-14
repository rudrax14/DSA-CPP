#include <iostream>
using namespace std;

int divide(int divisor, int dividend)
{
    int start = 0;
    int end = dividend;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (mid * divisor == dividend)
        {
            return mid;
        }
        if (mid * divisor < dividend)
        {
            // ans store
            ans = mid;
            // right me jao
            start = mid + 1;
        }
        else
        {
            // left
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}



int main()
{
    int divisor = 2;
    int dividend = 7;

    cout << divide(divisor, dividend);
    

    return 0;
}