#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount+1,INT_MAX);
        v[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0 && v[i-coins[j]]!=INT_MAX){
                v[i]=min(v[i],1+v[i-coins[j]]);
            }}}
    if(v[amount]==INT_MAX) {return -1;}
    return v[amount];
    }
};