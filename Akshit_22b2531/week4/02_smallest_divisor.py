def smallest_divisor(nums, threshold):
    def compute_sum(div):
        return sum((num + div - 1) // div for num in nums)
    left, right = 1, max(nums)
    while left < right:
        mid = (left + right) // 2
        if compute_sum(mid) > threshold:
            left = mid + 1
        else:
            right = mid
    return left

# Example usage:
nums = [1,2,5,9]
threshold = 6
print(smallest_divisor(nums, threshold))  # Output: 5 