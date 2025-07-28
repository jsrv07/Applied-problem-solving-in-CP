from typing import List

def get_subsequences(s: str) -> List[str]:
    """
    Generates all subsequences of a string using recursion.
    This is equivalent to finding the power set of the characters.
    """
    result = []
    
    def find_subsequences(index, current_subsequence):
        # Base case: when we have processed all characters
        if index == len(s):
            result.append(current_subsequence)
            return
            
        # Decision: Include the character at the current index
        find_subsequences(index + 1, current_subsequence + s[index])
        
        # Decision: Do not include the character at the current index
        find_subsequences(index + 1, current_subsequence)

    find_subsequences(0, "")
    return result

if __name__ == '__main__':
    s1 = "abc"
    print(f"Subsequences of '{s1}':")
    # Sorting for consistent output order
    print(sorted(get_subsequences(s1), key=len))

    s2 = "a"
    print(f"\nSubsequences of '{s2}':")
    print(sorted(get_subsequences(s2), key=len))

    s3 = "xy"
    print(f"\nSubsequences of '{s3}':")
    print(sorted(get_subsequences(s3), key=len)) 