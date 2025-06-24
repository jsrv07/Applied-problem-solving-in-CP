#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    stack<char> stack;
    string temp = "";
    if(s.empty()) return "";
    stack.push(s[0]);
    for(int i(1); i<s.size(); i++) {
        if (!stack.empty() && s[i] == ')') {
            stack.pop();
            if(!stack.empty()) {
                temp+=s[i];
            }         
        } 
        else if(!stack.empty()){ 
            stack.push(s[i]); 
            temp+=s[i];
        }
        else {
            stack.push(s[i]);
        }
    }
    return temp;
}

int main(){
    string s;
    cin >> s;
    cout << removeOuterParentheses(s);
}