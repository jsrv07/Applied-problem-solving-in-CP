#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
      arr[i]=0;
    }
    for(int i=0;i<n-1;++i){
      int p;
      cin >>p;
      arr[p-1]=1;
    }
    for(int i=0;i<n;++i){
      if(arr[i]==0){cout<<i+1;}
    }
    return 0;
}