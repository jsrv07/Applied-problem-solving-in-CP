#include<iostream>
using namespace std;
int check(int* arr,int n,int hour,int mid){
    int sum=0;
    for(int i=0;i<n;i++){
    if(arr[i]%mid==0){
        sum+=arr[i]/mid;
    }
    else sum+=(arr[i]/mid+1);
    }
    return sum;
}
int binary_search(int* arr,int n,int hour,int start,int end,int mid){
    if(hour==n){
        return end;
    }
    while(true){
    if(check(arr,n,hour,mid)==hour){
        return mid;
    }
    else {
        if(check(arr,n,hour,mid)>hour){
            start=mid;
            mid=(mid+end)/2;
        }
        else {
            end=mid;
            mid=(mid+start)/2;
        }
    }
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int hour;
    cin>>hour;
    int x=binary_search(arr,n,hour,0,maxi,maxi/2);
    while(true){
        if((check(arr,n,hour,x-=1)==hour)){
            continue;
        }
        else {
            cout<<x+1;
            break;
        }
    }
}

