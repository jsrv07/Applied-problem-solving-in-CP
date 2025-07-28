class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==1) return s;
        int maxm=1;
        string mxm=s.substr(0,1);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((j-i+1 > maxm) && isPalindrome(s,i,j)){
                    maxm=j-i+1;
                    mxm=s.substr(i,j-i+1);
                }
            }
        }
        return mxm;
    }
private:
    bool isPalindrome(const string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};