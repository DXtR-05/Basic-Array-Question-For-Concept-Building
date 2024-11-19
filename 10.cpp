// Check if two elements exist with a sum equal to a target value.
#include <bits/stdc++.h>
using namespace std;

bool hasPairWithSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << "," << arr[j] << ")" << endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 15, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    if (!hasPairWithSum(arr, n, target)) {
        cout << "No pair with the given sum found." << endl;
    }

    return 0;
}
