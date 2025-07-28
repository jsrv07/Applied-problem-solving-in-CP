from typing import List

def combinationSum(candidates: List[int], target: int) -> List[List[int]]:
    result = []
    
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
            # Add the number to the current combination
            current_combination.append(candidates[i])
            # Recurse, allowing the same number to be chosen again
            backtrack(i, current_combination, current_sum + candidates[i])
            # Backtrack
            current_combination.pop()

    backtrack(0, [], 0)
    return result

if __name__ == '__main__':
    candidates1 = [2, 3, 6, 7]
    target1 = 7
    print(f"Candidates: {candidates1}, Target: {target1}")
    print(f"Combinations: {combinationSum(candidates1, target1)}")

    candidates2 = [2, 3, 5]
    target2 = 8
    print(f"\nCandidates: {candidates2}, Target: {target2}")
    print(f"Combinations: {combinationSum(candidates2, target2)}")

    candidates3 = [2]
    target3 = 1
    print(f"\nCandidates: {candidates3}, Target: {target3}")
    print(f"Combinations: {combinationSum(candidates3, target3)}") 