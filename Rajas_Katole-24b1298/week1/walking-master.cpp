#include <iostream>
#include <string>
using namespace std;

const int N = 7;
const int LEN = 48;
bool visited[N][N];
string path;
int ans = 0;

// Directions: U D L R
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char dir[] = {'U', 'D', 'L', 'R'};

bool is_valid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N && !visited[x][y];
}

void dfs(int x, int y, int step) {
    if (x == 6 && y == 0) {
        if (step == LEN) ans++;
        return;
    }

    if (step >= LEN) return;

    visited[x][y] = true;
    char move = path[step];

    for (int i = 0; i < 4; i++) {
        if (move != '?' && move != dir[i]) continue;

        int nx = x + dx[i];
        int ny = y + dy[i];

        if (!is_valid(nx, ny)) continue;

        // Prune: avoid getting stuck in a dead-end corridor
        if (
            (is_valid(x + 1, y) == false && is_valid(x - 1, y) == false && is_valid(x, y + 1) && is_valid(x, y - 1)) ||
            (is_valid(x, y + 1) == false && is_valid(x, y - 1) == false && is_valid(x + 1, y) && is_valid(x - 1, y))
        ) continue;

        dfs(nx, ny, step + 1);
    }

    visited[x][y] = false;
}

int main() {
    cin >> path;

    dfs(0, 0, 0);
    cout << ans << endl;

    return 0;
}
