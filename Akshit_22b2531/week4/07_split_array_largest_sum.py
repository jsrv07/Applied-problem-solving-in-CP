def split_array(nums, m):
    def can_split(limit):
        count, total = 1, 0
        for num in nums:
            if total + num > limit:
                count += 1
                total = num
                if count > m:
                    return False
            else:
                total += num
        return True
    left, right = max(nums), sum(nums)
    while left < right:
        mid = (left + right) // 2
        if can_split(mid):
            right = mid
        else:
            left = mid + 1
    return left


nums = [7,2,5,10,8]
m = 2
print(split_array(nums, m))  # Output: 18 