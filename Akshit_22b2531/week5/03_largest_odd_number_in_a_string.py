def largestOddNumber(num: str) -> str:
    for i in range(len(num) - 1, -1, -1):
        if int(num[i]) % 2 != 0:
            return num[:i+1]
    return ""

if __name__ == '__main__':
    # Example 1
    num1 = "52"
    print(f"Input: {num1}")
    print(f"Output: {largestOddNumber(num1)}")

    # Example 2
    num2 = "4206"
    print(f"Input: {num2}")
    print(f"Output: {largestOddNumber(num2)}")

    # Example 3
    num3 = "35427"
    print(f"Input: {num3}")
    print(f"Output: {largestOddNumber(num3)}") 