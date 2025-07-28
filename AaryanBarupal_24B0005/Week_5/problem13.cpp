class Solution {
public:
    unordered_map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int romanToInt(string s) {
        int answer=0;
        for(int i=0;i<s.size();i++){
            if(i!=s.size()-1 && m[s[i]]<m[s[i+1]]){
                answer-=m[s[i]];
            }
            else{
                answer+=m[s[i]];
            }
        }
        return answer;
    }
};