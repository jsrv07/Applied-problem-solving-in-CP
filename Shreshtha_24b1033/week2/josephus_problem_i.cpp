#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;cin>>n;
    queue<int> q;
    for(int i=1;i<=n;i++) q.push(i);
    bool flag=0;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        if(flag) cout<<temp<<" ";
        else q.push(temp);
        flag=1-flag;
    }
}
