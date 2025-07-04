class Solution {
public:
    bool helper(int index, int n, vector<int>& arr, int k) {
        if (k == 0) return true;
        if (index == n) return false;

        // Take current element if it's not greater than remaining sum
        if (arr[index] <= k) {
            if (helper(index + 1, n, arr, k - arr[index])) return true;
        }

        // Skip current element
        if (helper(index + 1, n, arr, k)) return true;

        return false;
    }

    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        return helper(0, n, arr, k);
    }
};

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}