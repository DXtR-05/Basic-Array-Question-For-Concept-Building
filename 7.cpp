#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the target number: ";
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << target << " is found at index " << i << endl;
            count++;
        }
    }
    cout << "The number " << target << " occurs " << count << " times in the array." << endl;

    return 0;
}
