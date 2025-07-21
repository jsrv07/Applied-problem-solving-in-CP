def painters_partition(boards, k):
    def is_possible(limit):
        count, total = 1, 0
        for board in boards:
            if total + board > limit:
                count += 1
                total = board
                if count > k:
                    return False
            else:
                total += board
        return True
    left, right = max(boards), sum(boards)
    while left < right:
        mid = (left + right) // 2
        if is_possible(mid):
            right = mid
        else:
            left = mid + 1
    return left

boards = [10, 20, 30, 40]
k = 2
print(painters_partition(boards, k))  # Output: 60 