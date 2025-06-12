#include <bits/stdc++.h>
using namespace std;


int ferrisWheel(int maxLimit, vector<int>& weight) {
    int l = 0, r = weight.size() - 1;
    int ans = 0, minA = INT_MAX;
    while(l<r) {
        if(weight[l]+weight[r] <= maxLimit) {
            l++;
            r--;
        }
        else {
            if (weight[l] > weight[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        ans++;
    }
    if (l == r) ans++;
    return ans;
}

bool comp(int a , int b) {
    return a < b;
}

int main(){
    int maxLimit,n;
    cin >> n >> maxLimit;
    vector<int> weight(n);
    for(int i(0); i<n; i++) {
        cin >> weight[i];
    }
    sort(weight.begin(),weight.end(), comp);
    cout << ferrisWheel(maxLimit, weight) << endl;
}