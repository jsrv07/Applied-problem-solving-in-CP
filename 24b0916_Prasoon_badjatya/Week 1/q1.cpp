#include<iostream>
#include<vector>
#include<string>

using namespace std;
int missingNumber(vector<int> nums, int n){
    int t = n*(n+1)/2;
    for(auto i: nums) {
        t-=i;
    }
    return t;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i(0); i<n; i++) {
        cin >> nums[i];
    }
    cout << missingNumber(nums, n);
}