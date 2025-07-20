#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        return upper_bound(arr.begin(),arr.end(),target)-lower_bound(arr.begin(),arr.end(),target);
    }
};
