class Solution {
public:
    bool checkThresold(int mid,vector<int>& nums,int threshold){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += (nums[i] + mid - 1) / mid; 
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        int answer=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(checkThresold(mid,nums,threshold)){
                right=mid-1;
                answer=mid;
            }
            else{
                left=mid+1;
            }
        }
        return answer;
    }
};