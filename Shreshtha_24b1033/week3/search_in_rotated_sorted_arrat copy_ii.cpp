#include <bits/stdc++.h>
using namespace std;
#define int long long

bool search(vector<int> nums, int target){
    int low=0;
    int high=nums.size()-1;
   /* 
    while(low<=high){
        int mid=(low+high)/2; 
        if(nums[mid]==target) return true;
        if(nums[mid]==nums[low] && nums[mid]==nums[high]){
            low++;
            high--;
        }
        else if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<=nums[mid])high =mid-1;
            else low=mid+1;
        }
        else{
            if(nums[mid]<=target && nums[low]>=target) low=mid+1;
            else high=mid-1;
        }
    }
    return false;
   */
    
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return true;
        if(nums[low]<nums[high]){
            if(nums[mid]<target) low=mid+1;
            else high=mid-1
        }
        else{
            if(nums[high]==nums[low]){
                if(target==nums[low]) return true;
                low++;
                high--;
            }
            else if(nums[low]<nums[mid] || nums[mid]>nums[high]){
                if(nums[low]<=target && target<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else if(nums[mid]<nums[high] || nums[mid]<nums[low]){
                if(nums[mid]<=target && target <=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
    }
    return false;
}

int32_t main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout << search(a,x);
}