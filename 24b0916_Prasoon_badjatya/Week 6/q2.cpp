#include<bits/stdc++.h>
using namespace std;


void helper(int open, int close, int n, string s, vector<string>& ans){
    if(open == close && open + close == 2*n) {
        ans.push_back(s);
        return;
    }
    if(open < n) {
        helper(open+1, close, n, s+'(', ans);
    }
    if(close < close) {
        helper(open, close+1, n, s+')', ans);
    }
}

vector<string> generateParantheses(int n){
    vector<string> ans;
    helper(0, 0, n, "", ans);
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParantheses(n);
    for(auto s : ans){
        cout << s << endl;
    }
}