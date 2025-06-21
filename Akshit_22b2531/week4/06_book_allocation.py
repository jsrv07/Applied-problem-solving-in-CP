def book_allocation(books, students):
    if students > len(books):
        return -1
    def is_possible(limit):
        count, total = 1, 0
        for pages in books:
            if total + pages > limit:
                count += 1
                total = pages
                if count > students:
                    return False
            else:
                total += pages
        return True
    left, right = max(books), sum(books)
    while left < right:
        mid = (left + right) // 2
        if is_possible(mid):
            right = mid
        else:
            left = mid + 1
    return left

books = [12,34,67,90]
students = 2
print(book_allocation(books, students))  # Output: 113 