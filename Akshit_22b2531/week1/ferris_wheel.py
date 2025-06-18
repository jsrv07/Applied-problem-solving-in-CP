n, x = map(int, input().split())
weights = list(map(int, input().split()))
weights.sort()

i, j = 0, n - 1
gondolas = 0

while i <= j:
    if weights[i] + weights[j] <= x:
        i += 1
    j -= 1
    gondolas += 1

print(gondolas)