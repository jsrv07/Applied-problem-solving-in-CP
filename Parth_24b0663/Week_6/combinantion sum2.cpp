class Solution {
public:
    vector<vector<int> > ans;
    int sum(vector<int> &sums){
        int s=0;
        for(int &i:sums)
        s+=i;
        return s;
    }
    void fn(vector<int> &a,int target,int j,vector<int> &sums){
        if(sum(sums)==target) {ans.push_back(sums);return;}
        if(sum(sums)>target || j==a.size()) return;
        int p=0;
        for(int i=j;i<a.size();i++){
            if(a[i]!=p){
            p=a[i];
            sums.push_back(a[i]);
            fn(a,target,i+1,sums);
            sums.pop_back();}
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> sums={};
        fn(candidates,target,0,sums);
        return ans;
    }
};