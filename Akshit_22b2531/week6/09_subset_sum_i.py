from typing import List

def subsetSums(arr: List[int]) -> List[int]:
    """
    Finds the sums of all subsets of a given array.
    """
    result = []
    n = len(arr)
    
    def find_sums(index, current_sum):
        # Base case: when we have processed all elements
        if index == n:
            result.append(current_sum)
            return
        
        # Decision: Include the current element
        find_sums(index + 1, current_sum + arr[index])
        
        # Decision: Exclude the current element
        find_sums(index + 1, current_sum)

    find_sums(0, 0)
    return result

if __name__ == '__main__':
    arr1 = [2, 3]
    print(f"Array: {arr1}")
    # Subsets: {}, {2}, {3}, {2, 3} -> Sums: 0, 2, 3, 5
    print(f"Sums of all subsets: {sorted(subsetSums(arr1))}")

    arr2 = [5, 2, 1]
    print(f"\nArray: {arr2}")
    # Subsets lead to sums: 0, 1, 2, 3, 5, 6, 7, 8
    print(f"Sums of all subsets: {sorted(subsetSums(arr2))}") 