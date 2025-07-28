class Solution {
public:
    int helper(int i,vector<int>& answer){
        if(i==0) return 0;
        if(i==1) return 1;
        if(answer[i]!=-1){
            return answer[i];
        }
        else{
            return answer[i]=helper(i-1,answer)+helper(i-2,answer);
        }
    }
    int fib(int n) {
        vector<int>answer(n+1,-1);
        return helper(n,answer);
    }
};