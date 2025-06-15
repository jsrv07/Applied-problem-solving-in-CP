n = int(input())
while True:
    print(n, end=' ')
    if n == 1:
        break
    if n % 2 == 0:
        n //= 2
    else:
        n = n * 3 + 1