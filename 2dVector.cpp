// array level 3 last point
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[5];

    vector<int> v;
    vector<int> v1(5);
    vector<int> v2(5, 101);

    // insert operation
    v.push_back(4);
    v.push_back(8);
    v.push_back(12);
    v.push_back(11);
    v.push_back(4);

    cout << v.size() << endl; // size kaise nikale

    cout << (v.empty() ? "Vector is empty" : "Vector is not empty") << endl; // is emplty or not 

    cout << "Size of vector: " << v.size() << endl;

    cout << "Printing vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
//---------------------------------------------------------------------//
    // 2D Array
    vector<vector<int>> arr2d(5, vector<int>(5, -1));

    // row size -> arr.size()
    for (int i = 0; i < arr2d.size(); i++)
    {
        for (int j = 0; j < arr2d[i].size(); j++)
        {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }

    // Jagged Array  - HW

    // vector<vector<int>> brr;

    // vector<int> vec1(10, 0);
    // vector<int> vec2(5, 1);
    // vector<int> vec3(7, 0);
    // vector<int> vec4(8, 1);
    // vector<int> vec5(20, 0);

    // brr.push_back(vec1);
    // brr.push_back(vec2);
    // brr.push_back(vec3);
    // brr.push_back(vec4);
    // brr.push_back(vec5);

    // for (int i = 0; i < brr.size(); i++)
    // {
    //     for (int j = 0; j < brr[i].size(); j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}