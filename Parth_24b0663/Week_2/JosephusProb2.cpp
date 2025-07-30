#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {

    int n;
    long long k;
    cin >> n >> k;

    indexed_set<int> s;
    for (int i = 1; i <= n; ++i) s.insert(i);

    long long idx = 0;
    vector<int> result;

    for (int i = 0; i < n; ++i) {
        int rem = s.size();
        idx = (idx + k) % rem;
        auto it = s.find_by_order(idx);
        result.push_back(*it);
        s.erase(it);
    }

    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}