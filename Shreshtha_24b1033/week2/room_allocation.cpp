#include <bits/stdc++.h>
using namespace std;
#define int long long

struct customer{
   int a,d,r,idx;
};

bool cmp(customer a,customer b){
    if(a.a==b.a)return a.d>b.d;
    return a.a<b.a;
}

signed main(){
    int n;cin>>n;
    vector<customer> c(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        c[i].a=x;
        c[i].d=y;
        c[i].idx=i;
    }
    sort(c.begin(),c.end(),cmp);
    vector<int> ans(n,0);
    
    //new thing- priority queue - heap
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    int rooms=0;
    for(auto cust:c){
        int arr=cust.a;
        int dept =cust.d;
        if(!pq.empty() && pq.top().first<arr){
            int r=pq.top().second;
            pq.pop();
            ans[cust.idx]=r;
            pq.push({dept,r});
        }
        else{
            rooms++;
            ans[cust.idx]=rooms;
            pq.push({dept,rooms});
        }
    }
    cout<<rooms<<endl;
    for(int x:ans) cout<<x<<" ";
    cout<<endl;
    
}
