t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    total = a + b
    # Both must be divisible by 3 and neither pile can have more than double the other
    if total % 3 == 0 and min(a, b) * 2 >= max(a, b):
        print("YES")
    else:
        print("NO")