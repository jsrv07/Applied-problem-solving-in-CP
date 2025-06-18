def single_non_duplicate(nums):
    left, right = 0, len(nums) - 1
    while left < right:
        mid = (left + right) // 2
        if mid % 2 == 1:
            mid -= 1
        if nums[mid] == nums[mid + 1]:
            left = mid + 2
        else:
            right = mid
    return nums[left]

# Example usage:
nums = [1,1,2,3,3,4,4,8,8]
print(single_non_duplicate(nums))  # Output: 2 