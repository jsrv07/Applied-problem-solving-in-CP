class Solution {
public:
    void helper(vector<vector<int>>& answer,int k,int n,int start,vector<int>& temp){
        if(k==0 && n==0){
            answer.push_back(temp);
            return;
        }
        if(k==0 || n<0) return;
        for(int i=start;i<=9;++i){
            temp.push_back(i);
            helper(answer,k-1,n-i,i+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>answer;
        vector<int>temp;
        helper(answer,k,n,1,temp);
        return answer;
    }
};