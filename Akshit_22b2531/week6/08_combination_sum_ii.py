from typing import List

def combinationSum2(candidates: List[int], target: int) -> List[List[int]]:
    result = []
    # Sorting is crucial to handle duplicates
    candidates.sort()
    
    def backtrack(start_index, current_combination, current_sum):
        # Base case: if the sum equals the target
        if current_sum == target:
            result.append(list(current_combination))
            return
            
        # Pruning: if the sum exceeds the target
        if current_sum > target:
            return
            
        # Explore further combinations
        for i in range(start_index, len(candidates)):
            # Skip duplicates: if the current element is the same as the previous one,
            # and we are not at the start of the iteration for this level.
            if i > start_index and candidates[i] == candidates[i-1]:
                continue
                
            # Add the number to the current combination
            current_combination.append(candidates[i])
            # Recurse, starting from the next index
            backtrack(i + 1, current_combination, current_sum + candidates[i])
            # Backtrack
            current_combination.pop()

    backtrack(0, [], 0)
    return result

if __name__ == '__main__':
    candidates1 = [10, 1, 2, 7, 6, 1, 5]
    target1 = 8
    print(f"Candidates: {candidates1}, Target: {target1}")
    print(f"Combinations: {combinationSum2(candidates1, target1)}")

    candidates2 = [2, 5, 2, 1, 2]
    target2 = 5
    print(f"\nCandidates: {candidates2}, Target: {target2}")
    print(f"Combinations: {combinationSum2(candidates2, target2)}")
