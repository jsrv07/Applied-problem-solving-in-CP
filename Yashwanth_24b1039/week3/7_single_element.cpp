#include<bits/stdc++.h>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    if(nums.size()==1) return nums[0];
    if(nums[0]!=nums[1]) return nums[0];
    if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];

    int low=1,high=nums.size()-2,mid=(low+high)/2;

    while(low<=high){
        mid=(low+high)/2;
        if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

        if(nums[mid]==nums[mid+(1-2*(mid%2))]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return -1;
}

int main(){
    
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<singleNonDuplicate(nums);

}