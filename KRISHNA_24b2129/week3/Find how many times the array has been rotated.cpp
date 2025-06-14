#include<iostream>
using namespace std;
int print(int* arr,int start,int end,int mid){
   if(arr[start]<arr[end]){
        return 0;
   }
   while(true){
    if(arr[mid]>arr[mid+1]){
        return mid+1;
    }
    else {
        if(arr[mid]>arr[start]){
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
    cout<<print(arr,0,n-1,n/2);
}