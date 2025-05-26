#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n+1]={};

    for(int k=0;k<n-1;k++){
        int x;
        cin>>x;
        arr[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
            break;
        }
    }
}