// Check if an array is sorted forward, backward, or not at all.
#include <iostream>
using namespace std;

bool isSortedAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {10, 8, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Check sorting
    if (isSortedAscending(arr, n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else if (isSortedDescending(arr, n)) {
        cout << "The array is sorted in descending order." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
