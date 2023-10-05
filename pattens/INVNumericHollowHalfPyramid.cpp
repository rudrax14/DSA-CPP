#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0)
            {
                cout << " " << col + 1;
            }
            else if (col == 0 || col == n - row - 1)
            {
                cout << " " << row + col + 1;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}