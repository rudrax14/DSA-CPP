#include <iostream>
#include <vector>
using namespace std;
// Function taking vector by value
void ByValue(vector<int> bar)
{
    // Modifying the local copy of the vector
    bar.push_back(42);
    cout << "Inside ByValue: ";
    for (int i = 0; i < bar.size(); ++i)
    {
        cout << bar[i] << " ";
    }
    cout << endl;
}

// Function taking vector by reference (non-const)
void ByReference(vector<int> &bar)
{
    // Modifying the original vector
    bar.push_back(42);
    cout << "Inside ByReference: ";
    for (int i = 0; i < bar.size(); ++i)
    {
        cout << bar[i] << " ";
    }
    cout << endl;
}

// Function taking vector by const-reference
void ByConstReference(const vector<int> &bar)
{
    // Cannot modify the original vector (read-only)
    // Uncommenting the line below would result in a compilation error:
    // bar.push_back(42);
    cout << "Inside ByConstReference: ";
    for (int i = 0; i < bar.size(); ++i)
    {
        cout << bar[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "-----OUTPUT-----" << endl;
    // Create a vector
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Call each function with the vector
    ByValue(myVector);
    cout << "After ByValue: ";
    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    ByReference(myVector);
    cout << "After ByReference: ";
    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // ByConstReference(myVector);
    // cout << "After ByConstReference: ";
    // for (int i = 0; i < myVector.size(); ++i)
    // {
    //     cout << myVector[i] << " ";
    // }
    // cout << endl;

    return 0;
}
