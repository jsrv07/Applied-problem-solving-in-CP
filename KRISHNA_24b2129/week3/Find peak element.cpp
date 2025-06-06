#include<iostream>
using namespace std;
void print(int* arr,int start,int end,int mid){
 while(true){
 if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
    cout<<mid;
    return;
 }
 if(arr[mid]<arr[mid-1]){
    end=mid;
    mid=(mid+start)/2;
 }
 else if(arr[mid]<arr[mid+1]){
    start=mid;
    mid=(mid+end)/2;
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
 print(arr,0,n-1,n/2);
}