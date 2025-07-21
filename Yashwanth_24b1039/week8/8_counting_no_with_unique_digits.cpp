#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int res=9;
        for(int i=0;i<n-1;i++){
            res*=(9-i);
        }
        return res+countNumbersWithUniqueDigits(n-1);
    }
};