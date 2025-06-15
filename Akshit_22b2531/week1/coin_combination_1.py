MOD = 10**9 + 7

n, x = map(int, input().split())
coins = list(map(int, input().split()))

dp = [0] * (x + 1)
dp[0] = 1

for i in range(1, x + 1):
    for coin in coins:
        if i - coin >= 0:
            dp[i] = (dp[i] + dp[i - coin]) % MOD

print(dp[x])