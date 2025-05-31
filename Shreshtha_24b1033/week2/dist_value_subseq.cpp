//ACCEPTED VERSION//
//OPTIMIZED//
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define in(v) for (auto &x : v) cin >> x;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

struct Query {
    int l, r, idx;
};

int32_t main() {
    fastio;
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    in(a);

    // Coordinate compression
    vector<int> compressed = a;
    sort(compressed.begin(), compressed.end());
    compressed.erase(unique(compressed.begin(), compressed.end()), compressed.end());

    for (int &x : a)
        x = lower_bound(compressed.begin(), compressed.end(), x) - compressed.begin();

    int maxVal = compressed.size();
    vector<int> freq(maxVal, 0);

    vector<Query> queries(q);
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        queries[i] = {l - 1, r - 1, i};  // 0-based
    }

    int blockSize = sqrt(n);
    sort(queries.begin(), queries.end(), [&](const Query &a, const Query &b) {
        int blockA = a.l / blockSize;
        int blockB = b.l / blockSize;
        if (blockA != blockB) return blockA < blockB;
        return (blockA & 1) ? a.r < b.r : a.r > b.r; // zig-zag
    });

    vector<int> ans(q);
    int l = 0, r = -1, distinct = 0;

    for (const Query &qr : queries) {
        while (l > qr.l) {
            --l;
            if (++freq[a[l]] == 1) ++distinct;
        }
        while (r < qr.r) {
            ++r;
            if (++freq[a[r]] == 1) ++distinct;
        }
        while (l < qr.l) {
            if (--freq[a[l]] == 0) --distinct;
            ++l;
        }
        while (r > qr.r) {
            if (--freq[a[r]] == 0) --distinct;
            --r;
        }
        ans[qr.idx] = distinct;
    }

    // Efficient output
    for (int i = 0; i < q; ++i)
        cout << ans[i] << '\n';

    return 0;
}
