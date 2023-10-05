#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0 || row == n - 1)
            {
                if (col % 2 == 0)
                {

                    cout << start;
                    start = start + 1;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << 1;
                }
                else if (col == 2 * row + 1 - 1)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    // for (int row = 0; row < n; row++)
    // {
    //     // space
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + col + 1;
    //     }
    //     int start = 2 * row;
    //     for (int col = 0; col < row; col = col + 1)
    //     {
    //         cout << start;
    //         start = start - 1;
    //     }
    //     cout << endl;
    // }
}