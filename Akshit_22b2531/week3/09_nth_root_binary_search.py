def nth_root(x, n, precision=1e-6):
    low, high = 0, max(1, x)
    while high - low > precision:
        mid = (low + high) / 2
        if mid ** n < x:
            low = mid
        else:
            high = mid
    return low

# Example usage:
x = 27
n = 3
print(round(nth_root(x, n), 6))  # Output: 3.0 