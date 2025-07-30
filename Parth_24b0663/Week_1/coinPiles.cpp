#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while(t){
        t--;
        double m,n;
        cin>>a>>b;
        // 2m+n=a;
        // 2n+m=b;
        m=double(2*a-b)/3;
        n=double(b-m)/2;
        if((int)m==m && (int)n==n && n>=0 && m>=0)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}