//MO ALGO APPPLIED//
//STILL TLE ON SOME TEST CASES//
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define in(v) for(auto &x : v) cin >> x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
const int N =1e6;
//MO ALGO
int rootn;
struct query{
    int idx, l,r;
};
query qu[N];
bool cmp(query q1, query q2){
    if(q1.l/rootn == q2.l/rootn){
        return q1.r>q2.r;
    }
    return q1.l/rootn < q2.l/rootn;
}
 
 
signed main(){
    fastio
    int n,q;
    cin>>n>>q;
    rootn=sqrtl(n);
    vector<int> a(n);
    in(a)
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        qu[i].l=l;
        qu[i].r=r;
        qu[i].idx=i;
    }
    sort(qu,qu+q,cmp);
    vector<int> ans(q);
    int curr_l=0;
    int curr_r=-1;
    int l,r;
    unordered_map<int,int> freq;
    int distinct=0;
 
    for(int i=0;i<q;i++){
        l=qu[i].l;
        r=qu[i].r;
        l--;r--;
        while(curr_l<l){
            freq[a[curr_l]]--;
            if(freq[a[curr_l]]==0) distinct--;
            curr_l++;
        }
        while(curr_r>r){
            freq[a[curr_r]]--;
            if(freq[a[curr_r]]==0) distinct--;
            curr_r--;
        }
        while(curr_l>l){
            curr_l--;            
            if(freq[a[curr_l]]==0) distinct++;
            freq[a[curr_l]]++;
        }
        while(curr_r<r){
            curr_r++;            
            if(freq[a[curr_r]]==0) distinct++;
            freq[a[curr_r]]++;
        }
        ans[qu[i].idx]=distinct;
 
    }
    for(int i=0;i<q;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
 
