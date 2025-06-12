#include<bits/stdc++.h>
using namespace std;
long long total(long long n){
    return (n*(n-1))/2;
}
int checks(int n){
    return 4*(n-1)*(n-2);
}
long long knights(long long n){
    return total(n*n)-checks(n);
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<knights(i)<<endl;
    }
}