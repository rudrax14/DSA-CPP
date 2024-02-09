#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            if (row == 0 || col == n-row || col == 1)
            {

                cout << col;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}