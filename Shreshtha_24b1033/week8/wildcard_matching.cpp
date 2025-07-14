class Solution {
public:
    bool isMatch(string s, string p) {
        int i=0,j=0;
        int starj=-1,lasti=-1;
        while(i<s.size()){
            if(j<p.size() && s[i]==p[j] || p[j]=='?'){
                i++;j++;
            }
            else if(j<p.size() && p[j]=='*'){
                starj=j;lasti=i;j++;
            }
            else if(starj!=-1){
                j=starj+1;lasti++;i=lasti;
            }
            else return false;
        }
        while(p[j]=='*') j++;
        if(j==p.size()) return true;
        else return false;
    }
};