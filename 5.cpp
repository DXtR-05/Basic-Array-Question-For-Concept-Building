// Create two arrays: one for odd elements and one for even elements.
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>odd;
    vector<int>even;
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    cout<<"odd array"<<endl;
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl; 
    cout<<"even array"<<endl;
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }
    return 0;
}
