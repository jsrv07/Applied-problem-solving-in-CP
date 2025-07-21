from typing import List

def subsetsWithDup(nums: List[int]) -> List[List[int]]:
    """
    Finds all unique subsets from a list that might contain duplicates.
    """
    result = []
    nums.sort()  # Sort to handle duplicates easily
    
    def find_subsets(start_index, current_subset):
        # Add the current subset to the result
        result.append(list(current_subset))
        
        for i in range(start_index, len(nums)):
            # Skip duplicates: if the current element is the same as the previous one,
            # and we're not at the very beginning of the loop for this level of recursion.
            if i > start_index and nums[i] == nums[i-1]:
                continue
                
            current_subset.append(nums[i])
            find_subsets(i + 1, current_subset)
            current_subset.pop() # Backtrack

    find_subsets(0, [])
    return result

if __name__ == '__main__':
    nums1 = [1, 2, 2]
    print(f"Subsets for {nums1}:")
    print(subsetsWithDup(nums1))

    nums2 = [0]
    print(f"\nSubsets for {nums2}:")
    print(subsetsWithDup(nums2))

    nums3 = [4, 4, 4, 1, 4]
    print(f"\nSubsets for {nums3}:")
    # Sorting will make it [1, 4, 4, 4, 4]
    print(subsetsWithDup(nums3)) 