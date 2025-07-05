from typing import List

def longestCommonPrefix(strs: List[str]) -> str:
    if not strs:
        return ""
    
    # Sort the list of strings. The common prefix will be between the first and last string.
    strs.sort()
    
    first_str = strs[0]
    last_str = strs[-1]
    
    common_prefix = []
    
    for i in range(len(first_str)):
        if i < len(last_str) and first_str[i] == last_str[i]:
            common_prefix.append(first_str[i])
        else:
            break
            
    return "".join(common_prefix)

if __name__ == '__main__':
    # Example 1
    strs1 = ["flower","flow","flight"]
    print(f"Input: {strs1}")
    print(f"Output: '{longestCommonPrefix(strs1)}'")

    # Example 2
    strs2 = ["dog","racecar","car"]
    print(f"Input: {strs2}")
    print(f"Output: '{longestCommonPrefix(strs2)}'")

    # Example 3
    strs3 = [""]
    print(f"Input: {strs3}")
    print(f"Output: '{longestCommonPrefix(strs3)}'")

    # Example 4
    strs4 = ["a"]
    print(f"Input: {strs4}")
    print(f"Output: '{longestCommonPrefix(strs4)}'") 