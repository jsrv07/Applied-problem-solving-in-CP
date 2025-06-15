n = int(input())
arr = list(map(int, input().split()))

moves = 0
for i in range(1, n):
    if arr[i] < arr[i-1]:
        moves += arr[i-1] - arr[i]
        arr[i] = arr[i-1]

print(moves)