#include<bits/stdc++.h>
using namespace std;
int findFirst(vector<int>& arr,int target){
    int first=-1;
    int l=0;
    int r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]>=target){
            if(arr[mid]==target) first=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return first;
}
int findLast(vector<int>& arr,int target){
    int last=-1;
    int l=0;
    int r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]<=target){
            if(arr[mid]==target) last=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return last;
}
vector<int> find(vector<int>& arr,int target){
    vector<int>result={-1,-1};
    result[0]=findFirst(arr,target);
    result[1]=findLast(arr,target);
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    vector<int>result=find(arr,target);
    cout<<result[0]<<" "<<result[1];
}