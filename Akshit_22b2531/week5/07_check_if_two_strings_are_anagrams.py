def areAnagrams(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False
    
    # Sort both strings and check if they are equal
    return sorted(s) == sorted(t)

if __name__ == '__main__':
    # Example 1
    s1, t1 = "anagram", "nagaram"
    print(f"Input: s = '{s1}', t = '{t1}'")
    print(f"Output: {areAnagrams(s1, t1)}")

    # Example 2
    s2, t2 = "rat", "car"
    print(f"Input: s = '{s2}', t = '{t2}'")
    print(f"Output: {areAnagrams(s2, t2)}")

    # Example 3
    s3, t3 = "listen", "silent"
    print(f"Input: s = '{s3}', t = '{t3}'")
    print(f"Output: {areAnagrams(s3, t3)}") 