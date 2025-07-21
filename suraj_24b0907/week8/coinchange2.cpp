#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long change(int amount, vector<int>& coins) {
        vector<unsigned long long> v(amount+1,0);
        v[0]=1;
        for (int coin : coins){
            for (int i=coin;i<=amount;++i){
                v[i]+=v[i-coin];}}
        return v[amount];
    }
};
