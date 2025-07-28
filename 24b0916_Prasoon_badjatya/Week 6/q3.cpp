#include<bits/stdc++.h>
using namespace std;

void helper(int i, string t, string s, vector<string>& ans){
    if(i == s.length()) {
        if (!t.empty())
            ans.push_back(t);
        return;
    }
    helper(i+1, t, s, ans);
    helper(i+1, t+s[i], s, ans);
}
vector<string> generatePower(string s){
    vector<string> ans;
    helper(0, "", s, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = generatePower(s);
    for(auto k : ans){
        cout << k << endl;
    }
}