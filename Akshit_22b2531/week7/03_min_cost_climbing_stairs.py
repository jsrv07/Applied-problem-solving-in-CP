def min_cost_climbing_stairs(cost):
    n = len(cost)
    if n == 0:
        return 0
    if n == 1:
        return cost[0]
    dp = [0] * n
    dp[0], dp[1] = cost[0], cost[1]
    for i in range(2, n):
        dp[i] = cost[i] + min(dp[i-1], dp[i-2])
    return min(dp[-1], dp[-2])

# Example usage:
if __name__ == "__main__":
    print(min_cost_climbing_stairs([10, 15, 20]))  # Output: 15 