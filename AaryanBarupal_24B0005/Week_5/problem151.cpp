class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        stack<string>st;

        while(ss>>word){
            st.push(word);
        }
        string answer="";
        
        while(!st.empty()){
            answer+=st.top();
            st.pop();
            if(!st.empty()) answer+=" ";
        }
        return answer;
    }
};