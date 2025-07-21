from typing import List

def generateParenthesis(n: int) -> List[str]:
    result = []
    
    def backtrack(current_string, open_count, close_count):
        # Base case: if the string has reached the desired length
        if len(current_string) == 2 * n:
            result.append(current_string)
            return
        
        # We can add an opening parenthesis if we haven't used all of them yet
        if open_count < n:
            backtrack(current_string + '(', open_count + 1, close_count)
            
        # We can add a closing parenthesis if it's less than the number of open parentheses
        if close_count < open_count:
            backtrack(current_string + ')', open_count, close_count + 1)

    backtrack("", 0, 0)
    return result

if __name__ == '__main__':
    n1 = 3
    print(f"Combinations of well-formed parentheses for n = {n1}:")
    print(generateParenthesis(n1))

    n2 = 1
    print(f"\nCombinations of well-formed parentheses for n = {n2}:")
    print(generateParenthesis(n2)) 