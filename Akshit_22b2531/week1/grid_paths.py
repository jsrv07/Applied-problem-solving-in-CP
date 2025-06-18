# This is a backtracking solution for the grid path problem.

path = input().strip()
n = 7
ans = 0

# Directions: D, U, L, R
dx = [1, -1, 0, 0]
dy = [0, 0, -1, 1]
dirc = "DULR"

visited = [[False]*n for _ in range(n)]

def is_blocked(x, y):
    # If you can't go left or right and both up and down are open, it's a dead end
    if 0 < x < n-1 and 0 < y < n-1:
        if visited[x+1][y] and visited[x-1][y] and not visited[x][y+1] and not visited[x][y-1]:
            return True
        if visited[x][y+1] and visited[x][y-1] and not visited[x+1][y] and not visited[x-1][y]:
            return True
    return False

def dfs(x, y, step):
    global ans
    if x == n-1 and y == 0:
        if step == n*n-1:
            ans += 1
        return
    if is_blocked(x, y):
        return
    visited[x][y] = True
    if path[step] == '?':
        for d in range(4):
            nx, ny = x + dx[d], y + dy[d]
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny, step+1)
    else:
        d = dirc.index(path[step])
        nx, ny = x + dx[d], y + dy[d]
        if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
            dfs(nx, ny, step+1)
    visited[x][y] = False

dfs(0, 0, 0)
print(ans)