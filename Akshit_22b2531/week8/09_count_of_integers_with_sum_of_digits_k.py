def count_numbers_with_sum_k(n, k):
    from functools import lru_cache
    digits = list(map(int, str(n)))
    
    @lru_cache(maxsize=None)
    def dp(pos, tight, sum_):
        if pos == len(digits):
            return 1 if sum_ == k else 0
        res = 0
        limit = digits[pos] if tight else 9
        for d in range(0, limit+1):
            res += dp(pos+1, tight and d==limit, sum_+d)
        return res
    return dp(0, True, 0)

# Example usage:
if __name__ == "__main__":
    print(count_numbers_with_sum_k(100, 1))  # Output: 2 (1 and 10) 