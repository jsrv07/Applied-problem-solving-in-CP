#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> temp;

    for (int num : nums) {
        auto it = lower_bound(temp.begin(), temp.end(), num);
        if (it == temp.end()) {
            temp.push_back(num);
        } else {
            *it = num;
        }
    }

    return temp.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << lengthOfLIS(nums) << endl;

    return 0;
}
