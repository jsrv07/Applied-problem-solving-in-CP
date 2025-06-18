#include<bits/stdc++.h>
using namespace std;
int minDays(vector<int>& bloomDay, int m, int k) {
    if((long)m*k > bloomDay.size()) return -1;
    int low = 1, high = 1e9;
    while(low<high){
        int mid = low + (high-low)/2;
        if(isPossibleBouquets(bloomDay, m, k, mid)){
            high = mid;
        }
        else low = mid + 1;
    }
    return low;
}
bool isPossibleBouquets(vector<int>& bloomDay, int m , int k, int mid){
    int total = 0;
    for(int i = 0; i < bloomDay.size(); i++){
        int count = 0;
        while(i < bloomDay.size() && count < k && bloomDay[i] <= mid){
            count++;
            i++;
        }
        if(count == k) {
            total++;
            i--;
        }
        if(total >= m) return true;
    }
    return false;
}
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bloomDay(n);
    for(int i(0); i<n; i++){
        cin >> bloomDay[i];
    }
    cout << minDays(bloomDay, m, k);
}