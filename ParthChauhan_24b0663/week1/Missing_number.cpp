#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,sum=0,sum2,k;
    cin>>n;
    sum2=n*(n+1)/2;
    for(int i=1;i<n;i++){
        cin>>k;
        sum+=k;
    }
    cout<<sum2-sum;
    return 0;
}
