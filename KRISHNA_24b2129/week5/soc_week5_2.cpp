#include<iostream>
using namespace std;
    string reverseWords(string s) {
        string result = "";
        int i = s.length() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;

            int end = i;
            while (i >= 0 && s[i] != ' ') i--;
            int start = i + 1;
            if (start <= end) {
                if (!result.empty()) result += ' ';
                result += s.substr(start, end - start + 1);
            }
        }

        return result;
    }
int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
}