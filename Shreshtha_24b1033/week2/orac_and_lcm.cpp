#include<bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){return b==0 ? a: gcd(b, a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}
bool isPrime(int n){
    if(n<=1) return false;if(n%2==0 || n%3==0) return false;
    for(int i=5; i*i<=n;i++){if(n%i==0) return false;}
    return true;
}

// lcm(a, gcd(b,c)) = gcd(lcm(a,b),c)
signed main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> gcds(n);
    gcds[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        gcds[i]=gcd(gcds[i+1],a[i]);
    }
    vector<int> arr;
    for(int i=0;i<n-1;i++){
        arr.push_back(lcm(a[i],gcds[i+1]));
    }
    int ans=arr[0];
    for(int i=1;i<arr.size();i++){
        ans=gcd(ans,arr[i]);
    }
    cout<<ans<<endl;

}
 
 
 
 
 
 
 
 