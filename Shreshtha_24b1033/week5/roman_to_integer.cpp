class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> rti={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int n=s.length();
        int num=0;
        for(int i=0;i<n-1;i++){
            if(rti[s[i]]>=rti[s[i+1]])num+=rti[s[i]];
            else num-=rti[s[i]];
        }
        num+=rti[s[n-1]];
        return num;
    }
};