def count_occurrences(arr, x):
    def find_first():
        left, right = 0, len(arr) - 1
        res = -1
        while left <= right:
            mid = (left + right) // 2
            if arr[mid] == x:
                res = mid
                right = mid - 1
            elif arr[mid] < x:
                left = mid + 1
            else:
                right = mid - 1
        return res

    def find_last():
        left, right = 0, len(arr) - 1
        res = -1
        while left <= right:
            mid = (left + right) // 2
            if arr[mid] == x:
                res = mid
                left = mid + 1
            elif arr[mid] < x:
                left = mid + 1
            else:
                right = mid - 1
        return res

    first = find_first()
    last = find_last()
    return (last - first + 1) if first != -1 else 0


arr = [1, 2, 2, 2, 3]
x = 2
print(count_occurrences(arr, x))  # Output: 3 