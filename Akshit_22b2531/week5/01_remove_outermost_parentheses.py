def removeOuterParentheses(s: str) -> str:
    res, opened = [], 0
    for c in s:
        if c == '(' and opened > 0:
            res.append(c)
        if c == ')' and opened > 1:
            res.append(c)
        opened += 1 if c == '(' else -1
    return "".join(res)

if __name__ == '__main__':
    # Example 1
    s1 = "(()())(())"
    print(f"Input: {s1}")
    print(f"Output: {removeOuterParentheses(s1)}")

    # Example 2
    s2 = "(()())(())(()(()))"
    print(f"Input: {s2}")
    print(f"Output: {removeOuterParentheses(s2)}")

    # Example 3
    s3 = "()()"
    print(f"Input: {s3}")
    print(f"Output: {removeOuterParentheses(s3)}") 