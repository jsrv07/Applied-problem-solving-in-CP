#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n==0) {return 1;}
        int r=10; 
        int u=9,a=9;
        for (int i=2;i<=n && a>0;++i){
            u*=a;
            r+=u;
            a-=1;
        }
        return r;
    }
};
