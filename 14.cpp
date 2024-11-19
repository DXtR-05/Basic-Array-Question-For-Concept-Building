// Find the 2nd maximum element; if none, print -1.
#include <bits/stdc++.h>
using namespace std;

int findSecondMax(int arr[], int n) {
    if (n < 2) return -1;

    int max1 = INT_MIN; // Maximum element
    int max2 = INT_MIN; // Second maximum element

    // Traverse the array to find the two largest distinct elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; // Update second max
            max1 = arr[i]; // Update first max
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; // Update second max if it's smaller than max1 but larger than max2
        }
    }

    return (max2 == INT_MIN) ? -1 : max2; // If no second max found, return -1
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondMax = findSecondMax(arr, n);
    if (secondMax == -1) {
        cout << "Second maximum element not found." << endl;
    } else {
        cout << "Second maximum element: " << secondMax << endl;
    }

    return 0;
}
