#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int r = 0; r < n; r++)
    {
        int c;
        for (int c = 0; c < r + 1; c++)
        {
            int ans =c+1;
            char ch = ans+'A'-1;
            cout<<ch;
        }

        for (int c=r; c >= 1; c=c-1)
        {
            int ans =c;
            char ch = ans+'A'-1;
            cout<<ch;
        }
        cout << endl;
    }
}