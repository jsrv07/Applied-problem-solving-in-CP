#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n,int k){
    vector<vector<int>> arr;
    int rootn =sqrtl(n);
    int row=0;
    int col=0;
    int cnt=0;
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(cnt>rootn){
            cnt=0;
            arr.push_back(v);
            v.clear();
        }
        v.push_back(i);
        cnt++;
    }

    if(!v.empty()) arr.push_back(v);

    for(int i=0;i<n;i++){
        int j=k%(n-i);
        while(j){
            if(col+j <arr[row].size()){
                col+=j;j=0;
            }
            else{
                j-=arr[row].size()-col;
                col=0;row++;
            }
            if(row>=arr.size()) row=0;
        }
        while(arr[row].size()<=col){
            col=0;row++;
            if(row >=arr.size()) row=0;
        }
        cout<<arr[row][col]<<" ";
        if(i!=(n-1)){
            arr[row].erase(arr[row].begin()+col);
            while(arr[row].size()<=col){
                col=0;row++;
                if(row>=arr.size()) row=0;
            }
        }
    }
}

signed main(){
    int n,k;
    cin>>n>>k;
    solve(n,k);
}