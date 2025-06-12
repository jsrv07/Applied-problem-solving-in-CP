#include <iostream>
#include <string>
using namespace std;

const int SIZE = 7;
bool visited[SIZE][SIZE];
string path;
int total_paths = 0;

struct Move {
    char dir;
    int dx, dy;
};

Move moves[] = {
    {'U', -1, 0},
    {'D', 1, 0},
    {'L', 0, -1},
    {'R', 0, 1}
};

bool is_valid(int x, int y) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE && !visited[x][y];
}

void dfs(int x, int y, int step) {
    if (x == SIZE - 1 && y == 0) {
        if (step == 48) total_paths++;
        return;
    }

    if (step >= 48) return;

    visited[x][y] = true;

    for (auto move : moves) {
        if (path[step] != '?' && path[step] != move.dir) continue;

        int nx = x + move.dx;
        int ny = y + move.dy;

        if (is_valid(nx, ny)) {
            dfs(nx, ny, step + 1);
        }
    }

    visited[x][y] = false; 
}

int main() {
    cin >> path;
    dfs(0, 0, 0); 
    cout << total_paths << endl;
    return 0;
}