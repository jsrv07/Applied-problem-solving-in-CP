#include <bits/stdc++.h>
using namespace std;

bool canSplit(vector<int>& nums, int k, int maxSum) {
    int parts = 1;
    int currentSum = 0;
    
    for (int num : nums) {
        if (currentSum + num > maxSum) {
            parts++;           
            currentSum = num; 
        } else {
            currentSum += num;
        }
    }
    return parts <= k;
}

int splitArray(vector<int>& nums, int k) {
    int start = *max_element(nums.begin(), nums.end());
    int end = accumulate(nums.begin(), nums.end(), 0);
    int answer = end;
    for (int guess = start; guess <= end; guess++) {
        if (canSplit(nums, k, guess)) {
            answer = guess;
            break; 
        }
    }
    return answer;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(iny i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    cout << splitArray(nums, k) << endl;
}