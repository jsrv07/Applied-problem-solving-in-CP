def climb_stairs(n):
    if n <= 2:
        return n
    a, b = 1, 2
    for _ in range(3, n+1):
        a, b = b, a + b
    return b

# Example usage:
if __name__ == "__main__":
    print(climb_stairs(5))  # Output: 8 