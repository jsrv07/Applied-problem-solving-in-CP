#include<bits/stdc++.h>
using namespace std;
double nth_root(int x,int n){
    double l=1;
    double r=x;
    double eps=1e-7;
    if(x<1){
        l=0;
        r=1;
    }
    while((r-l)>eps){
        double mid=(r+l)/2.0;
        if(pow(mid,n)<x) l=mid;
        else r=mid;
    }
    return l;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<fixed<<setprecision(6)<<nth_root(x,n)<<endl;
}