#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> weight, vector<int> value, int n, int W, int i){
    vector<int> prev(W + 1, 0);
    vector<int> curr(W + 1, 0);
    for(int i(1); i<=n; i++){
        for(int j(0); j<=W; j++){
            int skip = prev[j];
            int take = 0;
            if(weight[i-1] <= j) take = value[i-1] + prev[j-weight[i-1]];
            curr[j] = max(skip, take);
        }
        prev = curr;
    }
    return curr[W];
}

int main(){
    int n, W;
    cin >> n >> W;
    vector<int> weight(n);
    vector<int> value(n);
    for(int i(0); i<n; i++){
        cin >> weight[i];    
    }
    for(int i(0); i<n; i++){
        cin >> value[i];    
    }
    cout << knapsack(weight, value, n, W, n-1);
}