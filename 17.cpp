// Delete an element at the Xth position, shifting left.
#include <iostream>
using namespace std;

void deleteAtPosition(int arr[], int &n, int position) {
    if (position < 1 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left from the (position-1) index
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Initial array
    int n = 5; // Current size of the array

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int position = 3; // Position of the element to be deleted

    deleteAtPosition(arr, n, position);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
