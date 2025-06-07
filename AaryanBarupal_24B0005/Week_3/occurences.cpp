#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int>& nums,int target){
    int first=-1;
    int l=0;
    int r=nums.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            first=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return first;
}
int lastOccurrence(vector<int>& nums,int target){
    int last=-1;
    int l=0;
    int r=nums.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            last=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return last;
}
int count(vector<int>& nums,int target){
    int first=firstOccurrence(nums,target);
    int last=lastOccurrence(nums,target);
    if(first!=-1 && last!=-1){
        return last-first+1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    while(n--){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    cout<<count(nums,target);
}