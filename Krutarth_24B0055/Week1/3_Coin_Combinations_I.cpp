#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int x; cin >> x;
    int coins[n], value;
    for(int i=0; i<n; i++){
        cin >> value;
        coins[i] = value;
    }

    const int MOD = 1e9 + 7;
    int nways[x+1] = {0};
    nways[0] = 1;
    for(int i=0; i<x+1; i++){
        for(int j=0; j<n; j++){
            if(i-coins[j] >= 0){
                nways[i] += nways[i-coins[j]];
                nways[i] %= MOD;
            }
        }
    }
    cout << nways[x];
}
