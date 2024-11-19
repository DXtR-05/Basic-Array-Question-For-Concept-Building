// Calculate sum and product of array elements.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0, product=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum: "<<sum<<endl;
    cout<<"product: "<<product<<endl;
    return 0;
}
