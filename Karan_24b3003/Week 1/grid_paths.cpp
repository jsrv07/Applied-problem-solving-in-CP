#include <iostream>
#include <string>
using namespace std;

const int N = 7;
string path;
bool visited[N][N];
int result = 0;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
char moves[] = {'D', 'U', 'L', 'R'};

bool inside(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

void dfs(int step, int x, int y) {
    if (step == 48) {
        if (x == N - 1 && y == 0) result++;
        return;
    }
    if (x == N - 1 && y == 0) return;

    visited[x][y] = true;
    char c = path[step];
    
    for (int i = 0; i < 4; i++) {
        if (c != '?' && c != moves[i]) continue;
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (!inside(nx, ny) || visited[nx][ny]) continue;
        
        dfs(step + 1, nx, ny);
    }
    visited[x][y] = false;
}

int main() {
    cin >> path;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            visited[i][j] = false;

    dfs(0, 0, 0);
    cout << result << "\n";
    return 0;
}
