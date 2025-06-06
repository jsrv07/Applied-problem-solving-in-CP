#include<iostream>
using namespace std;
void print(int* arr,int start,int end,int mid){
    if(arr[start]!=arr[start+1]){
        cout<<arr[start];
        return;
    }
    if(arr[end]!=arr[end-1]){
        cout<<arr[end];
        return;
    }
 while(true){
    if(mid%2!=0){
        mid--;
    }
    if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
    cout<<arr[mid];
    return;
 }
    if(arr[mid]==arr[mid-1]){
        end=mid;
        mid=(mid+start)/2;
    }
    else {
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