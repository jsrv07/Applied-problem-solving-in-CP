#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& stalls, int k, int mid) {
    int cows = 1; 
    int lastPos = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            cows++;
            lastPos = stalls[i];
        }
        if (cows == k) return true;
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int low = 1, high = stalls.back() - stalls.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(stalls, k, mid)) {
            ans = mid;       
            low = mid + 1;   
        } else {
            high = mid - 1;  
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> stalls(n);
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    int k;
    cin>>k;
    cout << aggressiveCows(stalls, k) << endl; 
}