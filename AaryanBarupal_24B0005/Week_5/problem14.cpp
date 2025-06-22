class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer="";
        for(int i=0;i<strs[0].size();++i){
            for(int j=0;j<strs.size()-1;++j){
                if(strs[j][i]!=strs[j+1][i]){
                    return answer;
                }
            }
            answer.push_back(strs[0][i]);
        }
        return answer;
    }
};