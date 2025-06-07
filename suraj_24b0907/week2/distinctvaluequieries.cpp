#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n,q,a,b;
    cin >> n;
    cin >> q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<q;i++){
        unordered_set<int> s;
        cin >> a;
        cin >> b;
        for (int j=a-1;j<=b-1;j++){
            s.insert(arr[j]);
        }
        cout<<s.size()<<endl;
    }

}