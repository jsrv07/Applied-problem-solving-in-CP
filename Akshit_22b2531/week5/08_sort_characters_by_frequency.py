from collections import Counter

def frequencySort(s: str) -> str:
    # Count the frequency of each character
    counts = Counter(s)
    
    # Sort the characters based on their frequency in descending order
    # If frequencies are the same, the original problem doesn't specify order,
    # so any order is acceptable. Here, we can sort by character as a tie-breaker.
    sorted_chars = sorted(counts.keys(), key=lambda x: (-counts[x], x))
    
    # Build the result string
    result = ""
    for char in sorted_chars:
        result += char * counts[char]
        
    return result

if __name__ == '__main__':
    # Example 1
    s1 = "tree"
    print(f"Input: '{s1}'")
    print(f"Output: '{frequencySort(s1)}'")

    # Example 2
    s2 = "cccaaa"
    print(f"Input: '{s2}'")
    print(f"Output: '{frequencySort(s2)}'")

    # Example 3
    s3 = "Aabb"
    print(f"Input: '{s3}'")
    print(f"Output: '{frequencySort(s3)}'") 