#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
        long long val = 0;
        long long high = *max_element(piles.begin() , piles.end());
        long long i = 1;
        while(i <= high){
            long long mid = i + (high -i)/2;
            long long total_time = 0;
            for(auto pile : piles){
                total_time += (1LL *pile/mid) + (1LL *pile %mid != 0);
            }
            if(total_time <= h){
                val = mid;
                high = mid-1;
            }
            else{
                i = mid+ 1;
            }
            
        }
        return val;
    }
    
