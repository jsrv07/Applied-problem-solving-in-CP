def reverseWords(s: str) -> str:
    # Split the string by spaces. The split() method automatically handles multiple spaces
    # and removes empty strings.
    words = s.split()
    
    # Reverse the list of words.
    reversed_words = words[::-1]
    
    # Join the words back together with a single space.
    return " ".join(reversed_words)

if __name__ == '__main__':
    # Example 1
    s1 = "the sky is blue"
    print(f"Input: '{s1}'")
    print(f"Output: '{reverseWords(s1)}'")

    # Example 2
    s2 = "  hello world  "
    print(f"Input: '{s2}'")
    print(f"Output: '{reverseWords(s2)}'")

    # Example 3
    s3 = "a good   example"
    print(f"Input: '{s3}'")
    print(f"Output: '{reverseWords(s3)}'") 