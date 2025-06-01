#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, const vector<vector<int>>& children, vector<int>& currentPath, vector<vector<int>>& paths) {
    currentPath.push_back(node);
    if (children[node].size() == 1) {
        dfs(children[node][0], children, currentPath, paths);
    } else if (children[node].size() > 1) {
        paths.push_back(currentPath);
        for (int child : children[node]) {
            vector<int> newPath;
            dfs(child, children, newPath, paths);
        }
    } else {
        // It's a leaf node
        paths.push_back(currentPath);
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
        vector<int> p(n + 1);
        vector<vector<int>> children(n + 1);
        int root = -1;

        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
            if (p[i] == i) {
                root = i;
            } else {
                children[p[i]].push_back(i);
            }
        }

        vector<vector<int>> paths;
        vector<int> currentPath;
        dfs(root, children, currentPath, paths);

        cout << paths.size() << '\n';
        for (const auto& path : paths) {
            cout << path.size() << '\n';
            for (int v : path) cout << v << ' ';
            cout << '\n';
        }
    }

    return 0;
}