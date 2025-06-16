#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
    stack<int> stk;
    int j = 0, l = 1;
    for(int i(0); i<k;){
        if(j < arr.size() && arr[j] == l) j++;
        else {
            stk.push(l);
            i++;
        }
        l++;
    }
    return stk.top();
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums1(n);
    for(int i(0); i<n; i++){
        cin >> nums1[i];
    }
    cout << findKthPositive(nums1, k);
}