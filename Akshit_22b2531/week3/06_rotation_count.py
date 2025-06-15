def rotation_count(arr):
    left, right = 0, len(arr) - 1
    n = len(arr)
    while left <= right:
        if arr[left] <= arr[right]:
            return left
        mid = (left + right) // 2
        next_ = (mid + 1) % n
        prev = (mid - 1 + n) % n
        if arr[mid] <= arr[next_] and arr[mid] <= arr[prev]:
            return mid
        elif arr[mid] <= arr[right]:
            right = mid - 1
        else:
            left = mid + 1
    return 0

# Example usage:
arr = [15, 18, 2, 3, 6, 12]
print(rotation_count(arr))  # Output: 2 