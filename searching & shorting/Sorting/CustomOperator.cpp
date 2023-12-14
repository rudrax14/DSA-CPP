#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// void print(vector<int> &v) {
//   for (int i = 0; i < v.size(); ++i) {
//     cout << v[i] << " ";
//   }
//   cout << endl;
// }

void printvv(const vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// bool mycomp(int &a, int &b) {
//   // return a < b; // increasing order sorting
//   return a > b; // decreasing order sorting
// }

bool mycompfor1stIndex(vector<int> &a, vector<int> &b)
{
    // sort by 1st index of vector
    // return a[1] < b[1]; // asc order
    return a[1] > b[1]; // dsc order
}

int main()
{
    // vector<int> v = {44, 55, 22, 11, 33};
    // sort(v.begin(), v.end()); // increasing order sorting
    // sort(v.begin(), v.end(), mycomp);
    // print(v);

    // vector of vector sorting
    //   vector<vector<int>> v;
    //   int n;
    //   cout << "Enter size:\n";
    //   cin >> n;
    //   for (int i = 0; i < n; ++i) {
    //     int a, b;
    //     cout << "enter a, b" << endl;
    //     cin >> a >> b;
    //     vector<int> temp;
    //     temp.push_back(a);
    //     temp.push_back(b);
    //     v.push_back(temp);
    //   }
    vector<vector<int>> v = {{1, 22}, {2, 33}, {3, 44}, {4, 55}};
    cout << "Here are the Values" << endl;
    printvv(v);
   cout << "Sorted by 2nd index in descending order" << endl;
    sort(v.begin(), v.end(), mycompfor1stIndex);

    printvv(v);
    return 0;
}