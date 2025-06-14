#include <iostream>
#include <vector>
using namespace std;


bool canMake(vector<int>& bloomDay, int m, int k, int days) {
    int bouquets = 0, flowers = 0;

    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= days) {
            flowers++;
            if (flowers == k) {
                bouquets++;
                flowers = 0; 
            }
        } else {
            flowers = 0; 
        }
    }
    return bouquets >= m;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    long long total = (long long)m * k;
    if (total > bloomDay.size()) return -1; 

    
    int minDay = bloomDay[0], maxDay = bloomDay[0];
    for (int i = 1; i < bloomDay.size(); i++) {
        if (bloomDay[i] < minDay) minDay = bloomDay[i];
        if (bloomDay[i] > maxDay) maxDay = bloomDay[i];
    }

    int ans = -1;
    int low = minDay, high = maxDay;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canMake(bloomDay, m, k, mid)) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> bloomDay(n);
    for(int i=0;i<n;i++){
        cin>>bloomDay[i];
    }
    int m,k;
    cin>>m>>k;
    cout << minDays(bloomDay, m, k); 
}