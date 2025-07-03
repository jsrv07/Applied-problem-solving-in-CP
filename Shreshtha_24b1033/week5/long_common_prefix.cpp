class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre="";
        int i=0;
        while(i<strs[0].size()){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=strs[0][i]){
                    return pre;
                }
            }
            pre+=strs[0][i];
            i++;
        }
        return pre;
    }
};