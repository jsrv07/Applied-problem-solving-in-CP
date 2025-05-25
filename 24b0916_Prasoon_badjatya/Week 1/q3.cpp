#include<iostream>
#include<vector>
#include<string>

using namespace std;
int changeCombination(int amount, vector<int>& coins) {
    if (amount == 0) return 1;
    else if (amount < 0) return 0;
    int temp = 0;
    for(int i(0); i<coins.size(); i++) {
        temp+=changeCombination(amount-coins[i], coins);
    }
    return temp;
}

int main(){
    int n, amount;
    cin >> n >> amount;
    vector<int> coins(n);
    for(int i(0); i<n; i++) {
        cin >> coins[i];
    }
    cout << changeCombination(amount, coins);
}