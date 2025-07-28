from typing import List

def generateBinaryStrings(n: int) -> List[str]:
    """
    Generates all binary strings of length n without consecutive 1s.
    """
    result = []
    
    def generate(current_string, length):
        if length == n:
            result.append(current_string)
            return
            
        # Add '0' to the string and recurse
        generate(current_string + '0', length + 1)
        
        # Add '1' only if the last character is not '1'
        if not current_string or current_string[-1] == '0':
            generate(current_string + '1', length + 1)

    generate("", 0)
    return result

if __name__ == '__main__':
    n1 = 3
    print(f"Binary strings of length {n1} without consecutive 1s:")
    print(generateBinaryStrings(n1))
    
    n2 = 4
    print(f"\nBinary strings of length {n2} without consecutive 1s:")
    print(generateBinaryStrings(n2)) 