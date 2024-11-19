// Create a duplicate of an array.
#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout << "CPP Easy Snippet" << endl;
    vector<int>org={1,2,3,4,5,6};
    vector<int>dup=org;
    cout<<"original array"<<endl;
    for(int i=0;i<org.size();i++){
        cout<<org[i]<<" ";
    }
    cout<<endl;
    cout<<"duplicate array"<<endl;
    for(int i=0;i<dup.size();i++){
        cout<<dup[i]<<" ";
    }
    return 0;
}
