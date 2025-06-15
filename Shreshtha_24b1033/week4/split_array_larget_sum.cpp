class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l=max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end());

        while(l<=h){
            int mid=(l+h)/2;
            int sub=1;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                if(sum+nums[i] >mid){
                    sub++;
                    sum=0;
                }
                sum+=weights[i];
            }
            if(sub>k) l=mid+1;
            else h=mid-1;
        }
        return l;
    }
};