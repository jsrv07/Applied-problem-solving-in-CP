#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> s;
    int n,p,t;
    vector<int> v;
    cin >> t;
    while(t>0){
    s={};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s.insert(i);
    }
    int arr[n],ar[n] {};
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        s.erase(arr[i]);
    } 
    (s.size()>0)?cout<<s.size()<<endl:cout<<1<<endl<<1<<endl<<1<<endl;

    for(auto x:s){
        v={};
        v.push_back(x);
        p=arr[x];
        while(ar[p-1]==0){
            v.push_back(p);
            ar[p-1]=1;
            p=arr[p];
        }
        cout<<v.size()<<endl;
        for(int i=v.size()-1;i>=0;i-=1){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }        cout<<endl;
    t-=1;

}
}