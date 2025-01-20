// DynamicArrayInsertionUsingNew
#include <iostream>
using namespace std;

int main() {
    int* arr;
    int n, pos, value;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Allocate memory dynamically
    arr = new int[n + 1];

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the position and value to insert
    cout << "Enter the position to insert (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        delete[] arr; // Free memory
        return 1;
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos] = value;

    // Display the array
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
