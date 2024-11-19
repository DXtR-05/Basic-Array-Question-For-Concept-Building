// Find the 2nd minimum element; if none, print -1.
#include <bits/stdc++.h>
using namespace std;

int findSecondMin(int arr[], int n) {
    if (n < 2) return -1;

    int min1 = INT_MAX; // Minimum element
    int min2 = INT_MAX; // Second minimum element

    // Traverse the array to find the two smallest distinct elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1; // Update second min
            min1 = arr[i]; // Update first min
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i]; // Update second min if it's smaller than min1 but larger than min2
        }
    }

    return (min2 == INT_MAX) ? -1 : min2; // If no second min found, return -1
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondMin = findSecondMin(arr, n);
    if (secondMin == -1) {
        cout << "Second minimum element not found." << endl;
    } else {
        cout << "Second minimum element: " << secondMin << endl;
    }

    return 0;
}
