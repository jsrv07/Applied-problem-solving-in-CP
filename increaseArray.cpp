#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,x,p,ans=0;
    cin>>n;
    cin>>p;
    while(n>1){
        n--;
        cin>>x;
        if(p>x)
        ans+=p-x;
        p=max(p,x);
    }
    cout<<ans;
    return 0;
}