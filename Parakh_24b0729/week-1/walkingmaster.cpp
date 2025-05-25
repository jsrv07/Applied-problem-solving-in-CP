#include <iostream>
#include <string>
using namespace std;

string path;
bool vis[7][7];
int ans = 0;

// Directions: D, U, R, L
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
const char dir[] = {'D', 'U', 'R', 'L'};

// Check if we can go to x,y
bool valid(int x, int y) {
    return x >= 0 && x < 7 && y >= 0 && y < 7 && !vis[x][y];
}

// Trap detection: if current cell is boxed in both horizontal or vertical
bool trapped(int x, int y) {
    // horizontal wall with open verticals
    if (!valid(x, y - 1) && !valid(x, y + 1) && valid(x - 1, y) && valid(x + 1, y)) return true;
    // vertical wall with open horizontals
    if (!valid(x - 1, y) && !valid(x + 1, y) && valid(x, y - 1) && valid(x, y + 1)) return true;
    return false;
}

void dfs(int x, int y, int i) {
    // Already too long
    if (i == 48) {
        if (x == 6 && y == 0) ans++;
        return;
    }

    // If reached end too early
    if (x == 6 && y == 0) return;

    if (trapped(x, y)) return;

    vis[x][y] = true;

    char move = path[i];

    for (int d = 0; d < 4; ++d) {
        if (move != '?' && move != dir[d]) continue;
        int nx = x + dx[d], ny = y + dy[d];

        if (!valid(nx, ny)) continue;

        // Prune unnecessary splits: avoid creating two unconnected areas
        if (
            (d == 0 && !valid(x + 2, y) && valid(x + 1, y - 1) && valid(x + 1, y + 1)) ||
            (d == 1 && !valid(x - 2, y) && valid(x - 1, y - 1) && valid(x - 1, y + 1)) ||
            (d == 2 && !valid(x, y + 2) && valid(x - 1, y + 1) && valid(x + 1, y + 1)) ||
            (d == 3 && !valid(x, y - 2) && valid(x - 1, y - 1) && valid(x + 1, y - 1))
        ) continue;

        dfs(nx, ny, i + 1);
    }

    vis[x][y] = false;
}

int main() {
    cin >> path;
    dfs(0, 0, 0);
    cout << ans << endl;
    return 0;
}
