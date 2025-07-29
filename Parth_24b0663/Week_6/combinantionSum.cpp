
class Solution {
public:
    vector<vector<int>> ans;
    int sim(vector<int> &s){
        int sum=0;
        for(int & k: s)
        sum+=k;
        return sum;
    }
    void summer(vector<int>& a,vector<int>& sums,int j,int target){
        for(int i=j;i<a.size();i++){
            if(sim(sums)==target) {ans.push_back(sums);return;}
            if(sim(sums)>target) return;
            sums.push_back(a[i]);
            summer(a,sums,i,target);
            sums.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> s={};
        summer(candidates,s,0,target);
        return ans;
    }
};