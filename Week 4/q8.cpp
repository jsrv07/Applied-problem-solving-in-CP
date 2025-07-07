#include<bits/stdc++.h>
using namespace std;
int minimizeTime(vector<int>& arr, int k) {
    int low = 1, high = 1e9;
    while(low<high){
        int mid = low + (high-low)/2;
        if(check(arr, k, mid)) high = mid;
        else low = mid+1;
    }
    return low;
}
bool check(vector<int>& arr, int k, int mid) {
    int total = 1, sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        if (arr[i] > mid) return false;  
        if (sum + arr[i] > mid) {
            total++;
            sum = arr[i];
        } else {
            sum += arr[i];
        }
    }
    return total <= k;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i(0); i<n; i++){
        cin >> arr[i];
    }
    cout << minimizeTime(arr, k);
}