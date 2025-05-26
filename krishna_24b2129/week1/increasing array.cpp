#include <iostream>
using namespace std;
int main(){
    int n,moves=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            moves+=arr[i-1]-arr[i];
        }
    }
    cout<<moves;
}
