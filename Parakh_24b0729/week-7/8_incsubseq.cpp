int lengthOfLIS(vector<int>& nums) {
    vector<int> lis;
    for (int num : nums) {
        auto it = lower_bound(lis.begin(), lis.end(), num);
        if (it == lis.end())
            lis.push_back(num);
        else
            *it = num;
    }
    return lis.size();
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}