#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    vector<int>ans;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int t=0;t<q;t++) {
        int a,b;
        cin>>a>>b;
        set<int>uniqueElements;
        for (int j=a-1;j<=b-1;j++) {
            uniqueElements.insert(arr[j]);
        }
ans.push_back(uniqueElements.size());
    }
    for (int i : ans) {
        cout<<i<<" ";
    }
}
