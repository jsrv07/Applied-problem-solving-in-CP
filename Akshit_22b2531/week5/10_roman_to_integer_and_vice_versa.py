def romanToInt(s: str) -> int:
    roman_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    result = 0
    for i in range(len(s)):
        if i > 0 and roman_map[s[i]] > roman_map[s[i-1]]:
            result += roman_map[s[i]] - 2 * roman_map[s[i-1]]
        else:
            result += roman_map[s[i]]
    return result

def intToRoman(num: int) -> str:
    val_map = [
        (1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'),
        (100, 'C'), (90, 'XC'), (50, 'L'), (40, 'XL'),
        (10, 'X'), (9, 'IX'), (5, 'V'), (4, 'IV'),
        (1, 'I')
    ]
    result = []
    for val, sym in val_map:
        while num >= val:
            result.append(sym)
            num -= val
    return "".join(result)

if __name__ == '__main__':
    # Roman to Integer Examples
    print("--- Roman to Integer ---")
    s1 = "III"
    print(f"Input: '{s1}' -> Output: {romanToInt(s1)}")
    s2 = "LVIII"
    print(f"Input: '{s2}' -> Output: {romanToInt(s2)}")
    s3 = "MCMXCIV"
    print(f"Input: '{s3}' -> Output: {romanToInt(s3)}")

    print("\n--- Integer to Roman ---")
    # Integer to Roman Examples
    n1 = 3
    print(f"Input: {n1} -> Output: '{intToRoman(n1)}'")
    n2 = 58
    print(f"Input: {n2} -> Output: '{intToRoman(n2)}'")
    n3 = 1994
    print(f"Input: {n3} -> Output: '{intToRoman(n3)}'") 