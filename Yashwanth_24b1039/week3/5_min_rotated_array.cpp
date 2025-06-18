#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int>& nums) {
    int low=1,high=nums.size()-1,mid=(low+high)/2;
    int result=nums[0];
    while(low<=high){
        mid=(low+high)/2;
        if((nums[mid]-nums[mid-1])<0){ 
            result=nums[mid];
            break;
        }
        else if(nums[mid]>=nums[0]){
            low=mid+1;
        }
        else if(nums[mid]<=nums[nums.size()-1]){
            high=mid-1;
        }
    }
    return result;
}

int main(){
    
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<findMin(nums);

}