def find_min_rotated_array(arr):
    left, right = 0, len(arr) - 1
    while left < right:
        mid = (left + right) // 2
        if arr[mid] > arr[right]:
            left = mid + 1
        else:
            right = mid
    return arr[left]

# Example usage:
arr = [3,4,5,1,2]
print(find_min_rotated_array(arr))  # Output: 1 