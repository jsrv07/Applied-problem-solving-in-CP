#include <bits/stdc++.h>
using namespace std;

    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;

        for(int n : nums){
            if(temp.empty() || temp.back()<n){
                temp.push_back(n);
            }
            else {
                int idx = binarySearch(temp, n);
                temp[idx] = n;
            }
        }
        return temp.size();
    }
    int binarySearch(vector<int>& temp, int n){
        int l = 0, r = temp.size()-1;

        while(l<=r){
            int m = (l+r)/2;
            if(temp[m] == n) return m;
            else if(temp[m] > n) r = m-1;
            else l = m+1;
        }
        return l;
    }


int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i(0); i<n; i++){
        cin >> nums[i];
    }
    cout << lengthOfLIS(nums);
}   