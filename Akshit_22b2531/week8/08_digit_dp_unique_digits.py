def count_numbers_with_unique_digits(n):
    if n == 0:
        return 1
    res, unique, available = 10, 9, 9
    for i in range(2, n+1):
        unique *= available
        res += unique
        available -= 1
    return res

# Example usage:
if __name__ == "__main__":
    print(count_numbers_with_unique_digits(2))  # Output: 91