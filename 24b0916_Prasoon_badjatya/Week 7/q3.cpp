#include <bits/stdc++.h>
using namespace std;

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int t0 = cost[0], t1 = cost[1];
        for(int i = 2; i < n; ++i){
            int temp = cost[i] + min(t0, t1);
            t0 = t1;
            t1 = temp;
        }
        return min(t0, t1);
    }

int main(){
    int n;
    cin >> n;
    vector<int> cost;
    for(int i(0); i<n; i++){
        cin >> cost[i];
    }
    cout << minCostClimbingStairs(cost);
}