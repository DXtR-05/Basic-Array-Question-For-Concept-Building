// Find the maximum element in an array.
#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxElement = arr[0]; // Assume the first element is the maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i]; // Update maxElement if a larger value is found
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {12, 3, 7, 15, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element in the array: " << findMax(arr, n) << endl;

    return 0;
}
