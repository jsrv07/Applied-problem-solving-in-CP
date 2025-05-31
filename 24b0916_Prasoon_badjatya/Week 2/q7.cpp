#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> A) {
    int ans = 0;
    for(auto i : A) {
        ans+=i;
    }
    return ans;
}

vector<int> sum_p(vector<int> A) {
    vector<int> prefix(A.size());
    prefix[0] = A[0];
    for(int i(1); i<A.size(); i++) {
        prefix[i] = prefix[i-1] + A[i];
    }
    return prefix;
}

struct entry {
    int l, r, p;
};


int main() {
    int n;
    cin >> n;
    for(int i(0); i<n; i++){
        int t,m;
        cin >> t >> m;
        vector<int> A(t);
        vector<entry> entries(m);
        for(int j(0); j<t; j++){
            cin >> A[j];
        }
        for(int j(0); j<m; j++){
            int x, y, z;
            cin >> x >> y >> z;
            entries[j] = {x, y, z};
        }
        int sum_A = sum(A);
        vector<int> prefix = sum_p(A);
        for(auto e : entries) {
            int prefix_sum = prefix[e.r-1] - prefix[e.l-1] + A[e.l-1];
            int new_sum = (e.p)*(e.r-e.l+1);
            int new_total = sum_A-prefix_sum+new_sum;
            if(new_total%2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}