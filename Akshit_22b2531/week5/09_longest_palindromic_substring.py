def longestPalindrome(s: str) -> str:
    if len(s) < 2:
        return s
    
    start = 0
    max_len = 1
    
    def expand_around_center(left, right):
        nonlocal start, max_len
        while left >= 0 and right < len(s) and s[left] == s[right]:
            if right - left + 1 > max_len:
                max_len = right - left + 1
                start = left
            left -= 1
            right += 1
            
    for i in range(len(s)):
        # For odd length palindromes (like "aba")
        expand_around_center(i, i)
        # For even length palindromes (like "abba")
        expand_around_center(i, i + 1)
        
    return s[start:start + max_len]

if __name__ == '__main__':
    # Example 1
    s1 = "babad"
    print(f"Input: '{s1}'")
    print(f"Output: '{longestPalindrome(s1)}'")

    # Example 2
    s2 = "cbbd"
    print(f"Input: '{s2}'")
    print(f"Output: '{longestPalindrome(s2)}'")

    # Example 3
    s3 = "a"
    print(f"Input: '{s3}'")
    print(f"Output: '{longestPalindrome(s3)}'")

    # Example 4
    s4 = "ac"
    print(f"Input: '{s4}'")
    print(f"Output: '{longestPalindrome(s4)}'") 