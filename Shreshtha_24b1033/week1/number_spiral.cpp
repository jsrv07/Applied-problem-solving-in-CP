#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int y,x;
        cin >>y>>x;
        int ans=0;
        int m=max(x,y);
        if(m%2==0){
            if(y==m) ans=m*m-x+1;
            else ans=(m-1)*(m-1)+y;
        }
        else{
            if(x==m) ans=m*m-y+1;
            else ans=(m-1)*(m-1)+x;
        }
        cout<<ans<<endl;
    }
}