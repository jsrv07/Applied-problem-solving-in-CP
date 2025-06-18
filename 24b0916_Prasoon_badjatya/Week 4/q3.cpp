#include<bits/stdc++.h>
using namespace std;
int shipWithinDays(vector<int>& weights, int days) {
    int low = 1, high = 1e9;
    while(low<high){
        int mid = low + (high-low)/2;
        if(check(weights, days, mid)) high = mid;
        else low = mid+1;
    }
    return low-1;
}
bool check(vector<int>& weights, int days, int mid) {
    int total = 0;
    for(int i(0); i<weights.size(); i++){
        int count = 0;
        while(i<weights.size() && count + weights[i]< mid){
            count+=weights[i];
            i++;
        }
        if(count <= mid) {
            total++;
            i--;
        }
        if(total > days) return false;
    }
    return true;
}
int main(){
    int n, days;
    cin >> n >> days;
    vector<int> weights(n);
    for(int i(0); i<n; i++){
        cin >> weights[i];
    }
    cout << shipWithinDays(weights, days);
}