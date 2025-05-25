#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,max_wt;
    cin>>n>>max_wt;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]+arr[j]<=max_wt){
            count++;
            i++;
            j--;
        }
        else{
            count++;
            j--;
        }
    }
    cout<<count;
}