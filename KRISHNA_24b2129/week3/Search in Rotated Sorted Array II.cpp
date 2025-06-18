#include<iostream>
using namespace std;
bool print(int* arr,int x,int start,int end,int mid){
   if(arr[mid]==x){
        return true;
   }
   while(true){
    if(arr[mid]==x){
        return true;
    }
    if(start>=end){
        return false;
    }
    else {
        if(x<arr[start]){
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
    int x;
    cin>>x;
    (print(arr,x,0,n-1,n/2))?cout<<"true":cout<<"false";
}