class Solution {
public:
    string longestPalindrome(string s) {//Manacher algorithm
        string t="#";
        for(char c: s){
            t+=c;
            t+="#";
        }

        int n=t.size();
        vector<int>P(n,0);
        int C=0,R=0;
        int maxlen=0;
        int centreindex=0;

        for(int i=0;i<n;i++){
            int mirror=2*C-i;
            if(i<R){
                P[i]=min(R-i,P[mirror]);
            }

            while(i+P[i]+1<n&& i-P[i]-1>=0 && t[i+P[i]+1]==t[i-P[i]-1]){
                P[i]++;
            }

            if(i+P[i]>R){
                C=i;
                R=i+P[i];
            }

            if(P[i]>maxlen){
                maxlen=P[i];
                centreindex=i;
            }
        }
        int start=(centreindex-maxlen)/2;
        return s.substr(start,maxlen);
    }
};




// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int start=0;
//         int end=0;
//         for(int i=0;i<s.size();++i){
//             int len1=expand_around_centre(s,i,i);//Odd length
//             int len2=expand_around_centre(s,i,i+1);//Even length
//             int len=max(len1,len2);
//             if(len>end-start){
//                 start=i-(len-1)/2;
//                 end=i+len/2;
//             }
//         }
//         return s.substr(start,end-start+1);
//     }

// private:
//     int expand_around_centre(string& s,int left,int right){
//         while(left>=0 && right<s.size() && s[left]==s[right]){
//             left--;
//             right++;
//         }
//         return right-left-1;
//     }
// };