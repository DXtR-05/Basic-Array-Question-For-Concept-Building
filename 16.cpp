// Insert an element at the Xth position, shifting right.
#include <iostream>
using namespace std;

void insertAtPosition(int arr[], int &n, int capacity, int element, int position) {
    if (position < 1 || position > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (n == capacity) {
        cout << "Array is full, cannot insert element!" << endl;
        return;
    }

    // Shift elements to the right from the (position-1) index
    for (int i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[position - 1] = element;

    // Increment the size of the array
    n++;
}

int main() {
    const int capacity = 10; // Maximum capacity of the array
    int arr[capacity] = {10, 20, 30, 40, 50}; // Initial array
    int n = 5; // Current size of the array

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element = 25; // Element to be inserted
    int position = 3; // Position where the element is to be inserted

    insertAtPosition(arr, n, capacity, element, position);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
