def minmax_gas_dist(stations, K):
    def possible(D):
        count = 0
        for i in range(1, len(stations)):
            count += int((stations[i] - stations[i-1]) / D)
        return count <= K
    left, right = 0, stations[-1] - stations[0]
    eps = 1e-6
    while right - left > eps:
        mid = (left + right) / 2
        if possible(mid):
            right = mid
        else:
            left = mid
    return left

# Example usage:
stations = [1,2,3,4,5,6,7,8,9,10]
K = 9
print(round(minmax_gas_dist(stations, K), 6))  # Output: 0.5 