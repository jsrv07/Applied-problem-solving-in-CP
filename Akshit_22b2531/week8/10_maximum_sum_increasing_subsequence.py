def max_sum_increasing_subsequence(arr):
    n = len(arr)
    msis = arr[:]
    for i in range(1, n):
        for j in range(i):
            if arr[i] > arr[j] and msis[i] < msis[j] + arr[i]:
                msis[i] = msis[j] + arr[i]
    return max(msis)

# Example usage:
if __name__ == "__main__":
    print(max_sum_increasing_subsequence([1, 101, 2, 3, 100, 4, 5]))  # Output: 106 