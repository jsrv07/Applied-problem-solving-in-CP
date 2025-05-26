#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,x,gondolas=0;
    cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int start=0,end=n-1;
while(start<=end){
    if(arr[start]+arr[end]<=x){
        gondolas++;
        start++;
        end--;
    }
    else{
        gondolas++;
        end--;
    }
}
cout<<gondolas;
}