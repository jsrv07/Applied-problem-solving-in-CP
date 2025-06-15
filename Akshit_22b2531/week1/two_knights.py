n = int(input())
for k in range(1, n+1):
    total = k * k * (k * k - 1) // 2  # total ways to place two knights
    if k > 2:
        attacks = 4 * (k - 1) * (k - 2)  # ways two knights attack each other
    else:
        attacks = 0
    print(total - attacks)