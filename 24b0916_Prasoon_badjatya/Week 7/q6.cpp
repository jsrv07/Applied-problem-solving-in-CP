#include <bits/stdc++.h>
using namespace std;

int training(vector<vector<int>> res, int n){
    if(n == 1) return max({res[0][0], res[0][1], res[0][2]});
    
    vector<int> prev = res[0];
    vector<int> curr(3, 0);
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            curr[j] = res[i][j] + max(prev[(j+1)%3], prev[(j+2)%3]);
        }
        prev = curr;
    }
    
    return max({curr[0], curr[1], curr[2]});
}


int main(){
    int n;
    cin >> n;
    vector<vector<int>> res(n,vector<int> (3));
    for(int i(0); i<n; i++){
        for(int j(0); j<3; j++){
            cin >> res[i][j];
        }
    }
    cout << training(res, n);
}   