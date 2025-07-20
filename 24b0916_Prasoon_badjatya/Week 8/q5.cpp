#include <bits/stdc++.h>
using namespace std;

    int countSubstrings(string s) {
        int ans = 0;
        for(int i(0); i<s.size(); i++){
            ans += countPalindrome(s, i, i);
            ans += countPalindrome(s, i, i+1);
        }
        return ans;
    }
    int countPalindrome(string s, int left, int right){
        int count = 0;
        while(left >= 0 && right <s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }

int main(){
    string s;
    cin >> s;
    cout << countSubstrings(s);
} 