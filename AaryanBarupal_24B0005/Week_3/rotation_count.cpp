#include<bits/stdc++.h>
using namespace std;
int rotation_count(vector<int>& nums){
    int l=0;
    int r=nums.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(nums[mid]>nums[r]) l=mid+1;
        else r=mid;
    }
    return l;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<rotation_count(nums);
}