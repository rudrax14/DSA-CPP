#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int r = 0; r < n; r = r + 1)
    {
        // first space
        for (int c = 0; c < n - r - 1; c = c + 1)
        {
            cout << " ";
        }
        // full char
        for (int c = 0; c < 2 * r + 1; c = c + 1)
        {
            // value
            if (c == 0 || c == 2 * r)
            {
                cout << "*";
            }
            // inside spaces
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // 2nd part
    for (int r = 0; r < n; r = r + 1)
    {
        // outer space
        for (int c = 0; c < r; c++)
        {
            cout << " ";
        }
        // remaining char
        for (int c = 0; c < 2 * n - 2 * r - 1; c++)
        {
            if (c == 0 || c == 2 * n - 2 * r - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}