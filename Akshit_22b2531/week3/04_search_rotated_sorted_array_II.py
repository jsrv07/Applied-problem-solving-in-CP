def search_rotated_array_II(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return True
        if arr[left] == arr[mid] == arr[right]:
            left += 1
            right -= 1
        elif arr[left] <= arr[mid]:
            if arr[left] <= target < arr[mid]:
                right = mid - 1
            else:
                left = mid + 1
        else:
            if arr[mid] < target <= arr[right]:
                left = mid + 1
            else:
                right = mid - 1
    return False

# Example usage:
arr = [2,5,6,0,0,1,2]
target = 0
print(search_rotated_array_II(arr, target))  # Output: True 