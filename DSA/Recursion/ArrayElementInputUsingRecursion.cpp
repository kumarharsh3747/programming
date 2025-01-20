#include <iostream>
#include <vector>
using namespace std;

void inputArray(vector <int> &arr, int size, int index = 0) {
    if (index >= size) {
        return; // Base case: Stop when the index reaches the array size
    }
    cout << "Enter Element " << index + 1 << ": ";
    cin >> arr[index];
    inputArray(arr, size, index + 1); // Recursive call for the next index
}

void display(vector <int> &arr,int size, int index=0){

    if (index>=size) return;

    cout<<arr[index]<<" ";
    display(arr, size, index+1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector <int> arr(n);
    inputArray(arr, n); // Take input for the array using recursion

    cout << "Array elements are: ";
    display(arr, n);
    cout << endl;

    return 0;
}
