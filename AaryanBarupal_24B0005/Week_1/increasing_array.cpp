#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    long long count=0;
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]<arr[i-1]){
            count+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout<<count;
}