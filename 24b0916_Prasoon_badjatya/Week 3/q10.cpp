#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int  l = 1, r = 0;
    for (int pile : piles) {
        r = max(r, pile);
    }
    while(l<r){
        int m = l+(r-l)/2;
        if(canEat(piles, h, m)) {
            r = m;
        }
        else l = m+1;
    }
    return l;
}
bool canEat(vector<int> piles, int h, int k) {
    int hrs = 0;
    for(int pile : piles){
        hrs += (pile + k -1)/k;
    }
    return hrs<=h;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << minEatingSpeed(A, k);
}