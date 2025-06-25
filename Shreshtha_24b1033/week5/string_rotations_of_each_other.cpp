
class Solution {
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        if(s1.length()!=s2.length()) return false;
        string temp=s1+s1;
        string pat=s2;
        int n= temp.length();
        int m=pat.length();
        vector<int> lps=computeLPS(pat);
        int i=0;int j=0;
        while(i<n){
            if(pat[j]==temp[i]){
                i++;j++;
            }
            if(j==m) return true;
            else if(i<n && pat[j]!=temp[i]){
                if(j!=0) j=lps[j-1];
                else i++;
            }
        }
        return false;

        
    }
private:
    vector<int> computeLPS(string &pat){
        int n=pat.size();
        vector<int> lps(n);
        int len =0;
        lps[0]=0;
        int i=1;
        while(i<n){
            if(pat[i]==pat[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }
};