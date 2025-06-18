#include <bits/stdc++.h>
using namespace std;


    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = -1, totalWeight = 0;
        for (int weight : weights) {
            maxWeight = max(maxWeight, weight);
            totalWeight = totalWeight + weight;
        }
        //here weight and total weight work as left and right pointer of bunary search
        while (maxWeight < totalWeight) {
            int mid = maxWeight + (totalWeight - maxWeight) / 2;
            int y = 1, x = 0;
            for (int weight : weights) {
                if (x + weight > mid) {
                    y++;
                    x = 0;
                }
                x = x + weight;
            }
            if (y > days) {
                maxWeight = mid + 1;
            } else {
                totalWeight = mid;
            }
        }
        return maxWeight;
    }
