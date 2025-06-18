#include<iostream>
#include<vector>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int>coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    vector<int>values(sum+1);
    values[0]=1;
    for(int amount=1;amount<=sum;amount++){
        for(int coin: coins){
            if(coin<=amount){
                values[amount]=(values[amount]+values[amount-coin])%MOD;
            }
        }
    }
    cout<<values[sum];
}