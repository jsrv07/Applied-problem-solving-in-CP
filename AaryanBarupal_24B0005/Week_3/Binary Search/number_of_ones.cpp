#include<bits/stdc++.h>
using namespace std;
int numberOfOne(vector<int>arr){
    int l=0;
    int r=arr.size()-1;
    int minimum=arr.size();
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]!=0) l=mid+1;
        else{
            r=mid-1;
            minimum=mid;
        }
    }
    return minimum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<numberOfOne(arr);
}