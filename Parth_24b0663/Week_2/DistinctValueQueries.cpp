#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5;
int n, q;
int arr[MAXN];
int freq[MAXN];
int answers[MAXN];
int block_size;
int distinct = 0;
struct Query {
    int l, r, idx;
    bool operator<(const Query& other) const {
        int block_a = l / block_size;
        int block_b = other.l / block_size;
        if (block_a != block_b)
            return block_a < block_b;
        return ((block_a & 1) ? (r > other.r) : (r < other.r));
    }
};

vector<int> compress(const vector<int>& a) {
    vector<int> temp = a;
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    vector<int> compressed;
    for (int val : a) {
        compressed.push_back(lower_bound(temp.begin(), temp.end(), val) - temp.begin());
    }
    return compressed;
}

int main() {
    cin >> n >> q;
    vector<int> original(n);
    for (int i = 0; i < n; ++i) {
        cin >> original[i];
    }
    vector<int> compressed = compress(original);
    for (int i = 0; i < n; ++i) {
        arr[i] = compressed[i];
    }
    block_size = sqrt(n);
    vector<Query> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i].l >> queries[i].r;
        queries[i].l--; queries[i].r--;
        queries[i].idx = i;
    }
    sort(queries.begin(), queries.end());
    int currL = 0, currR = -1;
    auto add = [&](int pos) {
        if (++freq[arr[pos]] == 1) distinct++;
    };
    auto remove = [&](int pos) {
        if (--freq[arr[pos]] == 0) distinct--;
    };
    for (const auto& query : queries) {
        while (currL > query.l) add(--currL);
        while (currR < query.r) add(++currR);
        while (currL < query.l) remove(currL++);
        while (currR > query.r) remove(currR--);
        answers[query.idx] = distinct;
    }
    for (int i = 0; i < q; ++i) {
        cout << answers[i] << '\n';
    }
    return 0;
}