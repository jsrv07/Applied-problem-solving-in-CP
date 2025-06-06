#include<iostream>
using namespace std;
void print(int* arr,int start,int end,int mid){
   if(arr[start]<arr[end]){
        cout<<arr[start];
        return;
   }
   while(true){
    if(arr[mid]>arr[mid+1]){
        cout<< arr[mid+1];
        return;
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
    print(arr,0,n-1,n/2);
}