class Solution {
  public:
    void helper(vector<int>& temp,vector<int>& arr,bool& answer,int sum,int start){
        if(sum==0){
            answer=true;
            return;
        }
        if(start==arr.size() || sum<arr[start] || answer){
            return;
        }
        for(int i=start;i<arr.size();++i){
            helper(temp,arr,answer,sum-arr[i],i+1);
        }
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        bool answer=false;
        vector<int>temp;
        sort(arr.begin(),arr.end());
        helper(temp,arr,answer,sum,0);
        return answer;
    }
};