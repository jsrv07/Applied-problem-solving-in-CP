#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        vector<int> pre(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pre[i]=pre[i-1]+a[i];
        }
        int sum=pre[n];
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int sub=pre[r]-pre[l-1];
            int add=(r-l+1)*k;
            if((sum+add-sub)%2 == 1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}