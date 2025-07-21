#include<bits/stdc++.h>
using namespace std;


void helper(int n, string s, vector<string>& ans){
    if(s.length() == n) {
        ans.push_back(s);
        return;
    }
    helper(n, s+'0', ans);
    if(s.empty() || s.back()!='1'){
        helper(n, s+'1', ans);
    }
}

vector<string> generateBinary(int n){
    vector<string> ans;
    helper(n, "", ans);
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateBinary(n);
    for(auto s : ans){
        cout << s << endl;
    }
}