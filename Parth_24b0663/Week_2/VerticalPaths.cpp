#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

vector<int> tree[MAXN];
vector<vector<int> > paths;
int parent[MAXN];
bool visited[MAXN];

void dfs(int node, vector<int>& path) {
    visited[node] = true;
    path.push_back(node);

    if (tree[node].empty()) {
        paths.push_back(path);
        return;
    }

    for (int child : tree[node]) {
        if (!visited[child]) {
            vector<int> new_path = path;
            dfs(child, new_path);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Reset for each test case
        paths.clear();
        for (int i = 1; i <= n; ++i) {
            tree[i].clear();
            visited[i] = false;
        }

        int root = -1;
        for (int i = 1; i <= n; ++i) {
            cin >> parent[i];
            if (parent[i] == i) {
                root = i;
            } else {
                tree[parent[i]].push_back(i);
            }
        }

        vector<int> path;
        dfs(root, path);

        // Output results
        cout << paths.size() << '\n';
        for (const auto& p : paths) {
            cout << p.size() << '\n';
            for (int node : p) {
                cout << node << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
