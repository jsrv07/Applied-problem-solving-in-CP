def ship_within_days(weights, D):
    def can_ship(cap):
        days = 1
        total = 0
        for w in weights:
            if total + w > cap:
                days += 1
                total = 0
            total += w
        return days <= D
    left, right = max(weights), sum(weights)
    while left < right:
        mid = (left + right) // 2
        if can_ship(mid):
            right = mid
        else:
            left = mid + 1
    return left

# Example usage:
weights = [1,2,3,4,5,6,7,8,9,10]
D = 5
print(ship_within_days(weights, D))  # Output: 15 