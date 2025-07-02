#include<iostream>
using namespace std;
    string largest(string num) {
        for (int i = num.length() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
    int main(){
        string s;
        cin>>s;
       cout<< largest(s);
    }
