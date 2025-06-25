class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            char c=i.first;
            int freq=i.second;
            pq.push({freq,c});
        }
        string ans="";
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            ans.append(i.first,i.second);
        }
        return ans;
    }
};