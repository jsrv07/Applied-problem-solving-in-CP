#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;
    cin>>n>>k;
    k++;
    queue<int> q;
    for(int i=1;i<=n;i++) q.push(i);
    bool flag=0;
    while(!q.empty()){
        for(int i=1;i<k;i++){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        cout<<q.front()<<" ";
        q.pop();
    }
}