def aggressive_cows(stalls, k):
    stalls.sort()
    def can_place(dist):
        count, last = 1, stalls[0]
        for i in range(1, len(stalls)):
            if stalls[i] - last >= dist:
                count += 1
                last = stalls[i]
            if count == k:
                return True
        return False
    left, right = 1, stalls[-1] - stalls[0]
    while left < right:
        mid = (left + right + 1) // 2
        if can_place(mid):
            left = mid
        else:
            right = mid - 1
    return left


stalls = [1,2,8,4,9]
k = 3
print(aggressive_cows(stalls, k))  # Output: 3 