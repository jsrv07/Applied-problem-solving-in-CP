#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs, int i = 0, int j = 0) {

    if (strs.empty() || i >= strs.size() || j >= strs[i].size()) {
        return "";
    }
    std::string ans = "";

    char currentChar = strs[0][j];
    if (strs[i][j] != currentChar) {
        return "";
    }
    if (i == strs.size() - 1) {
        ans += currentChar;
        ans += longestCommonPrefix(strs, 0, j + 1);
    } else {
        ans += longestCommonPrefix(strs, i + 1, j);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i(0); i<n; i++){
        cin >> strs[i];
    }
    cout << longestCommonPrefix(strs);
}