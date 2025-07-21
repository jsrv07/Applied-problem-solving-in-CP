#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSumIS(vector<int>& arr) {
        int n=arr.size();
        vector<int> v(n);
        for (int i=0;i<n;++i)
            v[i]=arr[i];
        for (int i=1;i<n;++i) {
            for (int j=0;j<i;++j) {
                if (arr[j]<arr[i]) {
                    v[i] = max(v[i], v[j] + arr[i]);}}}
        return *max_element(v.begin(), v.end());
    }
};
