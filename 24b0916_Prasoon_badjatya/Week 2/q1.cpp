#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;
int distinct = 0;
struct Query {
    int l, r, idx;
};

void add(int x) {
    mp[x]++;
    if (mp[x] == 1) {
        distinct++;
    }
}
void remove(int x) {
    mp[x]--;
    if (mp[x] == 0) {
        distinct--;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    int block_size = sqrt(n);
    vector<Query> queries(k);
    for(int i(0); i<k; i++){
        int x, y;
        cin >> x >> y;
        x--, y--;
        queries[i] = {x, y, i};
    }
    sort(queries.begin(), queries.end(), [block_size](const Query &a, const Query &b) {
        int block_a = a.l / block_size;
        int block_b = b.l / block_size;
        if (block_a != block_b)
            return block_a < block_b;
        return (block_a & 1) ? (a.r > b.r) : (a.r < b.r); 
    });
    int curL = 0, curR = -1;
    vector<int> answers(k);
    for(auto query : queries) {
        while(curL > query.l) {
            curL--;
            add(A[curL]);
        }
        while(curR < query.r) {
            curR++;
            add(A[curR]);
        }
        while(curL < query.l) {
            remove(A[curL]);
            curL++;
        }
        while(curR > query.r) {
            remove(A[curR]);
            curR--;
        }
        answers[query.idx] = distinct;
    }
    for (int i = 0; i < k; i++) {
        cout << answers[i] << endl;
    }
}
