class Solution {
public:
vector< vector<int> > ans;
void SubSeq(vector<int> &a,int n,int index,vector<int> &s){
    if(index>=n){
        ans.push_back(s);
        return;
    }
    if(index<n){
        s.push_back(a[index]);
        SubSeq(a,n,index+1,s);
        s.pop_back();
        SubSeq(a,n,index+1,s);
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> b;
    SubSeq(nums,nums.size(),0,b);
    return ans;
    }
};