#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
    void print_strings(int n,string& s,vector<string>& res){
        
        if(s.size()==n){
            res.push_back(s);
            return;
        }
        if(s.back()=='0'){
            s+="0";
            print_strings(n,s,res);
            s.pop_back();
            s+="1";
            print_strings(n,s,res);
            s.pop_back();
        }
        if(s.back()=='1'){
            s+="0";
            print_strings(n,s,res);
            s.pop_back();
        }
    }
    vector<string> generateBinaryStrings(int num) {
        
        vector<string> res;
        string s="0";
        print_strings(num,s,res);
        s="1";
        print_strings(num,s,res);
        return res;
    }
};