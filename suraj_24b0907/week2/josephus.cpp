#include <iostream>
#include <vector>
using namespace std;
signed main () {
    vector<int> v;
    int n,k,j=0-1;
    cin >> n >> k;
    if(k==0){
        for(int i=1;i<=n;i++){
            cout << i <<" ";
        }
        return 0;
    }
    for(int i=1;i<n+1;i++){
        v.push_back(i);
    }
    while(v.size()>0){
        j=(j+k+1)%(v.size());
        cout<<v[j]<<" ";
        v.erase(v.begin()+j);
        j-=1;
}
}