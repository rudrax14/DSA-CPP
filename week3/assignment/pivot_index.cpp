#include <iostream>
#include <vector>
using namespace std;
int bruteforce(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int lsum = 0;
        int rsum = 0;
        // lsum
        for (int j = 0; j < i; j++)
        {
            lsum += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rsum += arr[j];
        }
        cout << "For Index " << i << " Left sum " << lsum << " Right sum:" << rsum << endl;
        if (lsum == rsum)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    cout << "-----OUTPUT-----\n";
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    int result = bruteforce(arr);

    cout << result << endl;

    return 0;
}