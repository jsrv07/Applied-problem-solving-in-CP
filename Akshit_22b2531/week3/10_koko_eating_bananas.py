def min_eating_speed(piles, h):
    left, right = 1, max(piles)
    while left < right:
        mid = (left + right) // 2
        hours = sum((pile + mid - 1) // mid for pile in piles)
        if hours > h:
            left = mid + 1
        else:
            right = mid
    return left

# Example usage:
piles = [3,6,7,11]
h = 8
print(min_eating_speed(piles, h))  # Output: 4 