def find_kth_positive(arr, k):
    left, right = 0, len(arr)
    while left < right:
        mid = (left + right) // 2
        if arr[mid] - mid - 1 < k:
            left = mid + 1
        else:
            right = mid
    return left + k


arr = [2,3,4,7,11]
k = 5
print(find_kth_positive(arr, k))  # Output: 9 