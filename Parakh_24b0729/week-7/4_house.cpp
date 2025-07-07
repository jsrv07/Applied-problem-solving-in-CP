int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    int prev1 = 0, prev2 = 0;
    for (int i = 0; i < n; ++i) {
        int curr = max(prev2 + nums[i], prev1);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}