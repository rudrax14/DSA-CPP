#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int r = 0; r < n; r++)
    {
        // first half
        for (int c = 0; c < n - r; c++)
        {
            cout << "*";
        }
        // mid space
        for (int c = 0; c < 2*r+1; c++)
        {
            cout << " ";
        }
        // first half
        for (int c = 0; c < n - r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // down 

    for (int r = 0; r < n; r++)
    {
        // first half
        for (int c = 0; c < r+1; c++)
        {
            cout << "*";
        }
        // mid space
        for (int c = 0; c < 2*n-2*r-1; c++)
        {
            cout << " ";
        }
        // first half
        for (int c = 0; c < r+1; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

}