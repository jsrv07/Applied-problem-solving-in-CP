from typing import List

def combinationSum3(k: int, n: int) -> List[List[int]]:
    result = []
    
    def backtrack(start, current_combination, current_sum):
        # Base case: if the combination has the right size and sum
        if len(current_combination) == k and current_sum == n:
            result.append(list(current_combination))
            return
        
        # Pruning: if the combination is too long or the sum is too large
        if len(current_combination) > k or current_sum > n:
            return
            
        # Explore further combinations
        for i in range(start, 10):
            current_combination.append(i)
            backtrack(i + 1, current_combination, current_sum + i)
            current_combination.pop() # Backtrack

    backtrack(1, [], 0)
    return result

if __name__ == '__main__':
    k1, n1 = 3, 7
    print(f"Combinations for k={k1}, n={n1}:")
    print(combinationSum3(k1, n1))

    k2, n2 = 3, 9
    print(f"\nCombinations for k={k2}, n={n2}:")
    print(combinationSum3(k2, n2))

    k3, n3 = 4, 1
    print(f"\nCombinations for k={k3}, n={n3}:")
    print(combinationSum3(k3, n3))

    k4, n4 = 2, 18
    print(f"\nCombinations for k={k4}, n={n4}:")
    print(combinationSum3(k4, n4)) 