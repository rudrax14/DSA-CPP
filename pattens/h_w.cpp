#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // hollo

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || col == 0 || col == n - row - 1)
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

    // for (int r=0;r<n;r++){
    //     //inner loop
    //     for(int c=0;c<n;c++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int r = 0; r < n; r++)
    // {
    //     // inner loop
    //     for (int c = 0; c < n; c++)
    //     {
    //         if (r == 0 || r == n-1)
    //         {
    //             cout << " * ";
    //         }
    //         else if(c==0 || c==n-1)
    //         {
    //             cout << " * ";
    //         }
    //         else{
    //             cout<<"   ";  // equal amount of space
    //         }
    //     }
    //     cout << endl;
    // }
}
