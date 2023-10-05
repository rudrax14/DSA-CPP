#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
};
void colWisePrint(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
};

bool search(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int max(int arr[][3], int row, int col)
{
    // int maxAns = INT_MIN;
    int maxAns = -1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}
int min(int arr[][3], int row, int col)
{
    int minAns = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minAns)
            {
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}
void rowWiseSum(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
void diagonalWiseSum(int arr[][3], int row, int col)
{

    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << sum << endl;
}
void printDiagonal(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        cout << arr[i][i] << " ";
    }
}
void printDiagonal2(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        cout << arr[i][col - i - 1] << " ";
    }
}

int main()
{

    // Create 2d Array
    // int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    // int drr[][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    // wrong creation
    // int brr[3][] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    // int crr[][] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    // // print array
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // // printArray(arr, row, col);
    // colWisePrint(arr, row, col);

    // // searching
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // int target = 0;
    // cout << "Found or not: " << search(arr, row, col, target);
    // // max no
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // cout << "Max no is: " << max(arr, row, col);

    // // min no
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // cout << "Min no is: " << min(arr, row, col);

    // // sum of row
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // rowWiseSum(arr, row, col);

    // // sum of col
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // ColWiseSum(arr, row, col);

    // // sum of diagonal
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // diagonalWiseSum(arr, row, col);

    // // print diagonal backword
    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // printDiagonal(arr, row, col);

    // print diagonal forword /
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int row = 3;
    int col = 3;
    printDiagonal2(arr, row, col);

    return 0;
}