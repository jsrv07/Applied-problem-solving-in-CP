#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,x;
    cin>>n>>x;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    
   // for(int i=0;i<n;i++){cout<<p[i]<<" ";}
    int i=0;
    int j= n-1;
    int count=0;
    while(i<=j){
        if(p[i]+p[j] <=x){
            i++;
        }
        j--;
        count++;
    }
    cout<<count<<endl;
}