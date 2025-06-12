#include<iostream>
#include<vector>
#include<string>

using namespace std;
int increasingArray(vector<int> nums) {
    int count = 0;
    for(int i(1); i<nums.size(); i++){
        if(nums[i] < nums[i-1]) {
            count += nums[i-1]-nums[i];
            nums[i] = nums[i-1];
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i(0); i<n; i++) {
        cin >> nums[i];
    }
    cout << increasingArray(nums) << endl;
}