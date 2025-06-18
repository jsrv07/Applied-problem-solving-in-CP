#include <iostream>
#include <string>
using namespace std;

using namespace std;
const int N = 7;

int count;
char path[N*N+1];
bool cell_visited[N+1][N+1];

bool is_in_bounds(int x, int y){
    return 1 <= x && x <= N && 1 <= y && y <= N;
}

void dfs(int x, int y, int i){
    if(i == N*N-1 || (x == N && y == 1)){
        count += (i == N*N-1 && (x == N && y == 1));
        return;
    }

    if((!is_in_bounds(x+1, y) || cell_visited[x+1][y]) && (!is_in_bounds(x-1, y) || cell_visited[x-1][y])){
        if(is_in_bounds(x, y-1) && !cell_visited[x][y-1] && is_in_bounds(x, y+1) && !cell_visited[x][y+1]){
            return;
        }
    }

    if((!is_in_bounds(x, y+1) || cell_visited[x][y+1]) && (!is_in_bounds(x, y-1) || cell_visited[x][y-1])){
        if(is_in_bounds(x+1, y) && !cell_visited[x+1][y] && is_in_bounds(x-1, y) && !cell_visited[x-1][y]){
            return;
        }
    }

    cell_visited[x][y] = true;
    if(path[i] == 'D' || path[i] == '?'){
        if(is_in_bounds(x+1, y) && !cell_visited[x+1][y]){
            dfs(x+1, y, i+1);
        }
    }

    if(path[i] == 'U' || path[i] == '?'){
        if(is_in_bounds(x-1, y) && !cell_visited[x-1][y]){
            dfs(x-1, y, i+1);
        }
    }

    if(path[i] == 'R' || path[i] == '?'){
        if(is_in_bounds(x, y+1) && !cell_visited[x][y+1]){
            dfs(x, y+1, i+1);
        }
    }
    if(path[i] == 'L' || path[i] == '?'){
        if(is_in_bounds(x, y-1) && !cell_visited[x][y-1]){
            dfs(x, y-1, i+1);
        }
    }
    
    cell_visited[x][y] = false;
}

int main(){
    cin >> path;
    dfs(1, 1, 0);
    cout << count;
}