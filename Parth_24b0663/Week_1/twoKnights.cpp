#include<bits/stdc++.h>
using namespace std;
long int finder(long int n){
    long int p = n*n;
    long int k = p*(p-1)/2;
    long int f=0;
    if(n>2)
    f=(n-1)*(n-2)*4;
    return k-f;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<finder(i)<<endl;
    }
}
