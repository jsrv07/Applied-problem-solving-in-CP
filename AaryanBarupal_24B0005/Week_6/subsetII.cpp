class Solution {

  public:
    void helper(vector<vector<int>>& answer,vector<int>& temp,vector<int>& nums,int start){
        answer.push_back(temp);
        for(int i=start;i<nums.size();++i){
            if(i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            helper(answer,temp,nums,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        helper(answer,temp,nums,0);
        return answer;
    }
};