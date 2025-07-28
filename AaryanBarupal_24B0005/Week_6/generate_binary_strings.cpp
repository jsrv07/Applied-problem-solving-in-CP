class Solution {
  public:
    void helper(string temp,int n,vector<string>& answer){
        if(n==0){
            answer.push_back(temp);
            return;
        }
        helper(temp+'0',n-1,answer);
        if(temp.empty() || temp.back()!='1'){
            helper(temp+'1',n-1,answer);
        }
    }
    vector<string> generateBinaryStrings(int num) {
        vector<string>answer;
        helper("",num,answer);
        return answer;
    }
};