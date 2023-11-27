#include <iostream>
#include <vector>
using namespace std;
void printArr(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout <<i << "-";
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void wavePrint(vector<vector<int>> arr)
{
    int m = arr.size();
    int n = arr[0].size();
    cout << "Size M = " << m << " "
         << "Size N = " << n << endl;
    for (int startCol = 0; startCol < n; startCol++)
    {
        cout << ((startCol & 1) == 0) << "-";
        if ((startCol & 1) == 0)
        {
            // even => Top to down
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][startCol] << " " ;
            }
        }
        else
        {
            // odd => Bottom to top
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][startCol] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    cout << "-----OUTPUT-----\n";
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    printArr(arr);
    wavePrint(arr);
    return 0;
}