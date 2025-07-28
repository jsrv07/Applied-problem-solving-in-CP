#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int j,k=0;
        for(int i=num.length()-1;i>=0;i-=1){
            j=num[i]-'0';
            if(j%2==1){k=1;j=i;break;}
        }
        if(k==1){return num.substr(0,j+1);  }
        else return "";
    }
};