
#include<iostream>
#include<vector>
#include<string>

using namespace std;
const int grid = 7;
vector<vector<bool>> arrived(grid, vector<bool>(grid, false));
string input;
int ans = 0;
int dx[4] = {0, 0, -1, 1};       
int dy[4] = {1, -1, 0, 0};
char dir[4] = {'R', 'L', 'U', 'D'};

bool check(int x, int y, int step) {
    if(x >= grid || y >= grid || x < 0 || y < 0) return false;
    else if (arrived[x][y] == true) return false;
    else if (x == grid - 1 && y == 0 && step < 48) return false;
    else return true;
}

int dfs(int x, int y, int step) {
    if(step == 48) {
        if(x == grid - 1 && y == 0) return 1;
        else return 0;
    }
    else if (step > 48) return 0;
    int res = 0;
    arrived[x][y] = true;
    for(int i(0); i < 4; i++) {
        if(input[step] != '?' && input[step] != dir[i]) continue;
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(!check(nx,ny, step+1)) continue;
        res+=dfs(nx,ny,step+1);
    }
    arrived[x][y] = false;
    return res;
}
int main() {
    cin >> input;
    cout << dfs(0,0,0) << endl;
}