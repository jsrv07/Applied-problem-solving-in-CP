# Fibonacci Numbers - Memoization

def fib_memo(n, memo=None):
    if memo is None:
        memo = {}
    if n in memo:
        return memo[n]
    if n == 0:
        return 0
    if n == 1:
        return 1
    memo[n] = fib_memo(n-1, memo) + fib_memo(n-2, memo)
    return memo[n]

# Fibonacci Numbers - Tabulation

def fib_tab(n):
    if n == 0:
        return 0
    dp = [0] * (n+1)
    dp[1] = 1
    for i in range(2, n+1):
        dp[i] = dp[i-1] + dp[i-2]
    return dp[n]

# Example usage:
if __name__ == "__main__":
    print(fib_memo(10))  # Output: 55
    print(fib_tab(10))   # Output: 55 