// Check if three elements exist with a sum equal to a target value.
#include <iostream>
using namespace std;

bool hasTripletWithSum(int arr[], int n, int target) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << "Triplet found: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {12, 3, 4, 1, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    if (!hasTripletWithSum(arr, n, target)) {
        cout << "No triplet with the given sum found." << endl;
    }

    return 0;
}
