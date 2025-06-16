#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlaceCows(const vector<int>& stalls, int cows, int dist) {
    int count = 1; 
    int last_pos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last_pos >= dist) {
            count++;
            last_pos = stalls[i];
        }
    }
    return count >= cows;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());
    
    int low = 1; 
    int high = stalls.back() - stalls[0];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, cows, mid)) {
            ans = mid;
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, cows;
    cin >> n >> cows;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) cin >> stalls[i];

    cout << aggressiveCows(stalls, cows) << endl;
    return 0;
}
