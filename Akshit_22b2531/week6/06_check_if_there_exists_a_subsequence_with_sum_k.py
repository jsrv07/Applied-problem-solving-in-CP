from typing import List

def checkSubsequenceWithSumK(arr: List[int], k: int) -> bool:
    """
    Checks if there is a subsequence in arr that sums up to k.
    """
    n = len(arr)
    
    def solve(index, current_sum):
        # Base case: if the sum is met
        if current_sum == k:
            return True
            
        # Base case: if we have processed all elements
        if index == n:
            return current_sum == k
        
        # Pruning: if current sum exceeds k (only for positive numbers)
        # This optimization is not included to keep the logic general for any integers.
        
        # Decision: Include the current element
        if solve(index + 1, current_sum + arr[index]):
            return True
        
        # Decision: Exclude the current element
        if solve(index + 1, current_sum):
            return True
            
        return False

    return solve(0, 0)

if __name__ == '__main__':
    arr1 = [2, 4, 8]
    k1 = 6
    print(f"Array: {arr1}, Sum: {k1}")
    print(f"Subsequence with sum exists: {checkSubsequenceWithSumK(arr1, k1)}")

    arr2 = [1, 2, 3]
    k2 = 7
    print(f"\nArray: {arr2}, Sum: {k2}")
    print(f"Subsequence with sum exists: {checkSubsequenceWithSumK(arr2, k2)}")

    arr3 = [10, 20, 3]
    k3 = 0
    # The empty subsequence has a sum of 0
    print(f"\nArray: {arr3}, Sum: {k3}")
    print(f"Subsequence with sum exists: {checkSubsequenceWithSumK(arr3, k3)}") 