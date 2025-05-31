#include <bits/stdc++.h>
using namespace std;
#define int long long

struct ranges{
    int l,r,idx;
    bool operator<(const ranges& other) const{
        if(l==other.l) return r>other.r;
        return l<other.l;
    }
};

vector<vector<int>> checkrange(vector<ranges>&r, int n){
    vector<ranges> range(n);
    vector<int> cs(n), ced(n);
    for(int i=0;i<n;i++){
        range[i].l=r[i].l;
        range[i].r=r[i].r;
        range[i].idx=i;
    }
    sort(range.begin(),range.end());

    int minE=2e9;
    for(int i=n-1;i>=0;i--){
        if(range[i].r>=minE) cs[range[i].idx]=1;
        minE=min(minE,range[i].r);
    }

    int maxE=0;
    for(int i=0;i<n;i++){
        if(range[i].r<=maxE) ced[range[i].idx]=1;
        maxE=max(maxE,range[i].r);
    }
    return {cs,ced};

}

signed main(){
    int n;cin>>n;
    vector<ranges> r(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        r[i].l=a;
        r[i].r=b;
        r[i].idx=i;
    }
    vector<vector<int>>ans = checkrange(r,n);
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
