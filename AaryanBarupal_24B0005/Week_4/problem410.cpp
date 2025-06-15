class Solution {
public:
    bool canSplit(int maxSum,vector<int>& nums,int k){
        int sum=0;
        int count=1;
        for(int val: nums){
            sum+=val;
            if(sum<=maxSum){
                continue;
            }
            else{
                sum=val;
                count++;
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int left=*max_element(nums.begin(),nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canSplit(mid,nums,k)){
                answer=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return answer;
    }
};