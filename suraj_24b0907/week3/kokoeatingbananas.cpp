#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int l=piles.size();
        if(l==1){return ceil(double (piles[0])/h);}
        int t=piles[l-1];
        int left=0,right=t;
        int p;
        while (true){
            p=0;
            for(int i=0;i<l;i++){
                p+=ceil(double(piles[i])/t);
            }
            if(p==h){break;}
            else if(p<h){right=t;t=(left + t)/2;}
            else {left=t;t=(t+right)/2;}
        }
        while (true){
            p=0;
            for(int i=0;i<l;i++){
                p+=ceil(double(piles[i])/t);
            }
            if(p==h){t-=1;}
            else {return t+1;}
        }
        return t-1;
    }
};class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int l=piles.size();
        if(l==1){return ceil(double (piles[0])/h);}
        int t=piles[l-1];
        int left=0,right=t;
        int p;
        while (true){
            p=0;
            for(int i=0;i<l;i++){
                p+=ceil(double(piles[i])/t);
            }
            if(p==h){break;}
            else if(p<h){right=t;t=(left + t)/2;}
            else {left=t;t=(t+right)/2;}
        }
        while (true){
            p=0;
            for(int i=0;i<l;i++){
                p+=ceil(double(piles[i])/t);
            }
            if(p==h){t-=1;}
            else {return t+1;}
        }
        return t-1;
    }
};