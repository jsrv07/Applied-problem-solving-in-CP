#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void generate_powerset(string& s,string& subset,int idx,vector<string>& res){
        if(idx==s.size()){
            res.push_back(subset);
            return;
        }
        generate_powerset(s,subset,idx+1,res);
        subset+=s[idx];
        generate_powerset(s,subset,idx+1,res);
        subset.pop_back();
        return;
    }
    
    
    vector<string> AllPossibleStrings(string s) {
        
        string subset="";
        vector<string> res;
        generate_powerset(s,subset,0,res);
        sort(res.begin(),res.end());
        return res;
    }
};