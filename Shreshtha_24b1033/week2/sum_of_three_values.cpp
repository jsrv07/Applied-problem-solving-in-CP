#include <bits/stdc++.h>
using namespace std;
#define int long long

struct arr_sort{
   int val,idx;
};

bool cmp(arr_sort a,arr_sort b){
    return a.val<b.val;
}

void solve(vector<arr_sort>& a, int n,int x){
    for(int i=0;i<n-2;i++){
        int target=x-a[i].val;
        int l=i+1;
        int r=n-1;
        while(l<r){
            int sum=a[l].val+a[r].val;
            if(sum==target){
                cout<<a[i].idx +1<<" "<<a[l].idx+1<<" "<<a[r].idx+1<<endl;
                return;
            }
            else if(sum<target)l++;
            else r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
signed main(){
    int n,x;
    cin>>n>>x;
    vector<arr_sort> a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i].val=x;
        a[i].idx=i;
    } 
    sort(a.begin(),a.end(),cmp);
    solve(a,n,x);
}