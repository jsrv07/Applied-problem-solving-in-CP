#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  vector<string> v;
    vector<string> generateBinaryStrings(int num) {
        // Write your code
        string s="";
        ss(s,num,0);
        return v;
    }
    void ss(string s,int num,int size){
        if(size==num) {v.push_back(s);return;}
        if(size==0 || s[size-1]=='0') {
            ss(s+"0",num,size+1);
            ss(s+"1",num,size+1);
        }
        else {ss(s+"0",num,size+1);}
        return;
    }
};