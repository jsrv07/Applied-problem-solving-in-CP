def ninjas_training(points):
    n = len(points)
    dp = [[0]*4 for _ in range(n)]
    for last in range(4):
        dp[0][last] = max(points[0][i] for i in range(3) if i != last)
    for day in range(1, n):
        for last in range(4):
            dp[day][last] = max(points[day][task] + dp[day-1][task] for task in range(3) if task != last)
    return dp[n-1][3]

# Example usage:
if __name__ == "__main__":
    points = [
        [10, 40, 70],
        [20, 50, 80],
        [30, 60, 90]
    ]
    print(ninjas_training(points))  # Output: 210 