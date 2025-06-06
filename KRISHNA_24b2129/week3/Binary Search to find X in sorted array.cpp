#include<iostream>
using namespace std;
void find(int* arr,int x,int start,int end,int mid){
if(arr[mid]==x){
    cout<<mid+1;
    return;
}
if(arr[mid]>x){
    find(arr,x,start,mid,(start+mid)/2);
}
else find(arr,x,mid,end,(mid+end)/2);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int x;
        cin>>x;
    find(arr,x,0,n,n/2);
}