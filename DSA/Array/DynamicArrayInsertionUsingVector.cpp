// DynamicArrayInsertionUsingNew
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, pos, value;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;


    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    // Input the position and value to insert
    cout << "Enter the position to insert (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    //Insert new value
    arr.insert(arr.begin()+ pos, value);

    // Display the array
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   

    return 0;
}
