// Print alternate elements of an array.
#include <iostream>
using namespace std;
int main() {
    // cout << "CPP Easy Snippet" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i+=2){
        cout<<arr[i]<<" ";
    }
    return 0;
}
