// not done by myself and understood very litle will try again
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=*max_element(nums.begin(),nums.end());
        int end=accumulate(nums.begin(),nums.end(),0LL);
        int n=nums.size();
        int ans=start;
        while(start<=end){
            int middle=(start+end)/2;
            int count=1;
            int sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]>middle){
                    count++;
                    sum=nums[i];
                }else{
                    sum+=nums[i];
                }
            }
            if(count<=k){
                ans=middle;
                end=middle-1;
            }else{
                start=middle+1;
            }
        }
        return ans;
    }
};