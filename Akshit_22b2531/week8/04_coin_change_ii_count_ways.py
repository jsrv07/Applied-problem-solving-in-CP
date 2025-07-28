def change(amount, coins):
    dp = [0] * (amount + 1)
    dp[0] = 1
    for coin in coins:
        for x in range(coin, amount + 1):
            dp[x] += dp[x - coin]
    return dp[amount]

# Example usage:
if __name__ == "__main__":
    print(change(5, [1,2,5]))  # Output: 4 