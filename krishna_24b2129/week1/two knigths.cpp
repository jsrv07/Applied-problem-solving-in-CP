#include<bits/stdc++.h>
using namespace std;
long long ways(long long n){
    return ((n*n*(n*n-1))/2)-(4*(n-1)*(n-2));
}
int main(){
    int test;
    cin>>test;
    for(long long i=1;i<=test;i++){
        cout<<ways(i)<<endl;
    }
}