#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int x=0,len=s.length();
        for (int i=0;i<len;i++){
            if(s[i]=='M'){x+=1000;}
            else if(s[i]=='D'){x+=500;}
            else if(s[i]=='C'){
                if(i+1<len && s[i+1]=='D'){i+=1;x+=400;}
                else if(i+1<len && s[i+1]=='M'){i+=1;x+=900;}
                else {x+=100;}
            }
            else if(s[i]=='L'){x+=50;}
            else if(s[i]=='X'){
                if(i+1<len && s[i+1]=='L'){i+=1;x+=40;}
                else if(i+1<len && s[i+1]=='C'){i+=1;x+=90;}
                else {x+=10;}
            }
            else if(s[i]=='I'){
                if(i+1<len && s[i+1]=='V'){i+=1;x+=4;}
                else if(i+1<len && s[i+1]=='X'){i+=1;x+=9;}
                else {x+=1;}
            }
            else if(s[i]=='V'){x+=5;}
        }
        return x;
    }
};