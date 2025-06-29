#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        int l;
        char a;
        unordered_map<char,int> dict;
        for(auto c:s){dict[c]+=1;}
        priority_queue<tuple<int,char>> pq;
        for (auto it:dict){
            pq.push(make_tuple(it.second,it.first));
        }
        tuple<int,char> t;
        s="";
        while(!pq.empty()){
            t=pq.top();
            pq.pop();
            l=get<0>(t);
            a=get<1>(t);
            while(l>0){l-=1;s+=a;}
        }
        return s;
    }
};