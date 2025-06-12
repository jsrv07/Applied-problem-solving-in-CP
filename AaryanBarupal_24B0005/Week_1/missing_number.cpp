#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=(1LL*n*(n+1))/2;
    int num;
    for(int i=0;i<n-1;i++){
        cin>>num;
        sum-=num;
    }
    cout<<sum;
}