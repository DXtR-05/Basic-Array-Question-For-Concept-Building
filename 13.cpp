// Find the minimum element in an array.
#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
    int minElement = arr[0]; // Assume the first element is the minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i]; // Update minElement if a smaller value is found
        }
    }
    return minElement;
}

int main() {
    int arr[] = {12, 3, 7, 15, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element in the array: " << findMin(arr, n) << endl;

    return 0;
}
