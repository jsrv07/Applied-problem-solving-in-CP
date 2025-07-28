from typing import List

def countSubsequencesWithSumK(arr: List[int], k: int) -> int:
    """
    Counts the number of subsequences in arr that sum up to k.
    """
    n = len(arr)
    
    def solve(index, current_sum):
        # Base case: if we have processed all elements
        if index == n:
            # If the current sum equals k, we found a valid subsequence
            if current_sum == k:
                return 1
            else:
                return 0
        
        # Decision: Include the current element
        count_with = solve(index + 1, current_sum + arr[index])
        
        # Decision: Exclude the current element
        count_without = solve(index + 1, current_sum)
        
        return count_with + count_without

    # The problem of counting subsequences with sum K can result in counting 
    # the empty subsequence if k is 0. The typical interpretation excludes this.
    # If k=0, the result of the recursion will be 1 (for the empty set), which we might need to subtract.
    # However, let's stick to the direct recursive result first.
    
    return solve(0, 0)

if __name__ == '__main__':
    arr1 = [1, 2, 3]
    k1 = 3
    # Subsequences: {1, 2}, {3}
    print(f"Array: {arr1}, Sum: {k1}")
    print(f"Number of subsequences: {countSubsequencesWithSumK(arr1, k1)}")

    arr2 = [1, 1, 1]
    k2 = 2
    # Subsequences: {1, 1}, {1, 1}, {1, 1} (3 of them)
    print(f"\nArray: {arr2}, Sum: {k2}")
    print(f"Number of subsequences: {countSubsequencesWithSumK(arr2, k2)}")

    arr3 = [5, 2, 6, 4]
    k3 = 8
    # Subsequences: {2, 6}
    print(f"\nArray: {arr3}, Sum: {k3}")
    print(f"Number of subsequences: {countSubsequencesWithSumK(arr3, k3)}") 