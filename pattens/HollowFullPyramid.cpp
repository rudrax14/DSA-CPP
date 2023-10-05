#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    for (int r = 0; r < n; r++)
    {
        // space
        for (int c = 0; c < n - r - 1; c++)
        {
            cout << " ";
        }

        for (int c = 0; c < r + 1; c++)
        {
            if (r == n-1)
            {
                cout << " *";
            }
            else if (c == 0 || c == r)
            {
                cout << " *";
            }
            // inside spaces
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
