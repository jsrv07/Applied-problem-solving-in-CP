def isIsomorphic(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False
    
    map_s_t = {}
    map_t_s = {}
    
    for char_s, char_t in zip(s, t):
        if char_s in map_s_t:
            if map_s_t[char_s] != char_t:
                return False
        else:
            if char_t in map_t_s:
                return False
            map_s_t[char_s] = char_t
            map_t_s[char_t] = char_s
            
    return True

if __name__ == '__main__':
    # Example 1
    s1, t1 = "egg", "add"
    print(f"Input: s = '{s1}', t = '{t1}'")
    print(f"Output: {isIsomorphic(s1, t1)}")

    # Example 2
    s2, t2 = "foo", "bar"
    print(f"Input: s = '{s2}', t = '{t2}'")
    print(f"Output: {isIsomorphic(s2, t2)}")

    # Example 3
    s3, t3 = "paper", "title"
    print(f"Input: s = '{s3}', t = '{t3}'")
    print(f"Output: {isIsomorphic(s3, t3)}")

    # Example 4
    s4, t4 = "ab", "ca"
    print(f"Input: s = '{s4}', t = '{t4}'")
    print(f"Output: {isIsomorphic(s4, t4)}") 