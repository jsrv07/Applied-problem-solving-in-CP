def areRotations(s1: str, s2: str) -> bool:
    if len(s1) != len(s2):
        return False
    
    # Concatenate s1 with itself
    temp = s1 + s1
    
    # Check if s2 is a substring of the concatenated string
    if s2 in temp:
        return True
    else:
        return False

if __name__ == '__main__':
    # Example 1
    string1 = "geeksforgeeks"
    string2 = "forgeeksgeeks"
    print(f"Input: s1 = '{string1}', s2 = '{string2}'")
    print(f"Output: {areRotations(string1, string2)}")
    
    # Example 2
    string3 = "mightandmagic"
    string4 = "andmagicmigth"
    print(f"Input: s1 = '{string3}', s2 = '{string4}'")
    print(f"Output: {areRotations(string3, string4)}")

    # Example 3
    string5 = "abc"
    string6 = "acb"
    print(f"Input: s1 = '{string5}', s2 = '{string6}'")
    print(f"Output: {areRotations(string5, string6)}") 