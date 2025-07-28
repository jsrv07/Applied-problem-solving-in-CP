def min_days(bloomDay, m, k):
    def can_make(days):
        bouquets = flowers = 0
        for bloom in bloomDay:
            if bloom <= days:
                flowers += 1
                if flowers == k:
                    bouquets += 1
                    flowers = 0
            else:
                flowers = 0
        return bouquets >= m

    if m * k > len(bloomDay):
        return -1
    left, right = min(bloomDay), max(bloomDay)
    while left < right:
        mid = (left + right) // 2
        if can_make(mid):
            right = mid
        else:
            left = mid + 1
    return left

# Example usage:
bloomDay = [1,10,3,10,2]
m, k = 3, 1
print(min_days(bloomDay, m, k))  # Output: 3 