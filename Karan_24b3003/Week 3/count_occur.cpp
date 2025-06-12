class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        int l = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        int r = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
        return r - l;
    }
};