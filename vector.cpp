#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& arr)
{
    // //insert
    arr.push_back(5);
    arr.push_back(6);
    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void remove(vector<int>& arr)
{
    // Remove the last element from the vector
    arr.pop_back();
    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // //create vector
    vector<int> arr;
    insert(arr);
    cout << endl;
    remove(arr);

    return 0;
}