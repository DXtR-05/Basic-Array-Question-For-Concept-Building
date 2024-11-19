// Count unique and duplicate elements in an array (1-100).
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 10, 40, 50, 20, 30, 30, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Map to store freq of elements
    unordered_map<int, int> frequency;

    // Count the freq of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Count unique and duplicate elements
    int uniqueCount = 0, duplicateCount = 0;

    for (const auto& pair : frequency) {
        if (pair.second == 1) {
            uniqueCount++;
        } else {
            duplicateCount++;
        }
    }
    cout << "Number of unique elements: " << uniqueCount << endl;
    cout << "Number of duplicate elements: " << duplicateCount << endl;

    return 0;
}
