n=int(input())

def hanoi(x :int, a, b, c):
    if x==1:
        print(a,c)
        return 0
    hanoi(x-1,a,c,b)
    print(a,c)
    hanoi(x-1,b,a,c)

print((2**n)-1)
hanoi(n,1,2,3)